package main;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLClassLoader;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.HashMap;

class Token implements Serializable {
	String type = "";
	Object value = null;
	Position pos;
	ArrayList<Token> obj_attrs = new ArrayList<Token>();
	ArrayList<Token> table_access = new ArrayList<Token>();

	public Token(String type, Object value, Position pos) {
		this.type = type;
		this.value = value;
		this.pos = pos;
	}

	public boolean match(String type) {
		return this.type.equals(type);
	}

	public boolean end() {
		return this.type == Token.EOF || this.type == Token.SEMICOLON || this.type == Token.END;
	}

	public boolean endofcode() {
		return this.type == Token.EOF || this.type == Token.END;
	}

	public Token copy() {
		Token res = new Token(this.type, this.value, this.pos);
		ArrayList<Token> obj_attrs = new ArrayList<Token>();
		for (Token tok : this.obj_attrs) {
			obj_attrs.add(tok);
		}
		res.obj_attrs = obj_attrs;
		return res;
	}

	// Data Types
	static String STR = "str";
	static String NUM = "num";
	static String BOOL = "bool";
	static String NONE = "none";

	// ASCII
	static String IDENTIFIER = "id";
	static String VARIABLE = "var";
	static String KEYWORD = "keyword";
	static String EOF = "eof";
	static String END = "end";

	// Special Characters
	static String SEMICOLON = "semicolon";
	static String DOT = "dot";
	static String COLON = "colon";
	static String LPAREN = "lparen";
	static String RPAREN = "rparen";
	static String LCURLY = "lcurly";
	static String RCURLY = "rcurly";
	static String LSQUARE = "lsquare";
	static String RSQUARE = "rsquare";

	// KEYWORDS
	private static List<String> __KEYWORDS = List.of(
		"class",
		"if",
		"else",
		"loop",
		"skip",
		"break",
		"require",
		"return"
	);
	static ArrayList<String> KEYWORDS = new ArrayList<String>(__KEYWORDS);
	
}

class Position implements Serializable {
	String src = "";
	int ln = 1;
	int col = -1;
	int idx = -1;

	public Position(String src, int ln, int col, int idx) {
		this.src = src;
		this.ln = ln;
		this.col = col;
		this.idx = idx;
	}

	public void advance(String text) {
		this.idx++;
		this.col++;

		if (this.idx >= text.length()) {
			return;
		}

		if (text.charAt(this.idx) == '\n') {
			this.ln++;
			this.col = 0;
		}
	}

	public Position copy() {
		return new Position(this.src, this.ln, this.col, this.idx);
	}
}

class Error implements Serializable {
	Position pos;
	String msg;

	public Error(Position pos, String msg) {
		this.pos = pos;
		this.msg = msg;
	}

	public String as_string() {
		String res = this.pos.src;
		res += ":" + String.valueOf(this.pos.ln);
		res += ":" + String.valueOf(this.pos.col);
		res += ":error: " + this.msg;
		return res;
	}
}

class Lexer implements Serializable {
	String src = "";
	String text = "";
	char current_char = '\0';
	Position pos;

	public Lexer(String src, String text) {
		this.src = src;
		this.text = text;
		this.pos = new Position(src, 1, -1, -1);
		this.advance();
	}

	private void advance() {
		this.pos.advance(this.text);
		if (this.pos.idx >= this.text.length()) {
			this.current_char = '\0';
		} else {
			this.current_char = this.text.charAt(this.pos.idx);
		}
	}

	public Object start() {
		ArrayList<Token> tokens = new ArrayList<Token>();

		while (this.current_char != '\0') {
			if (this.current_char == ';') {
				tokens.add(new Token(
					Token.SEMICOLON,
					this.current_char,
					this.pos.copy()
				));
			} else if (this.current_char == '.') {
				tokens.add(new Token(
					Token.DOT,
					this.current_char,
					this.pos.copy()
				));
			} else if (this.current_char == ':') {
				tokens.add(new Token(
					Token.COLON,
					this.current_char,
					this.pos.copy()
				));
			} else if (this.current_char == '{') {
				tokens.add(new Token(
					Token.LCURLY,
					this.current_char,
					this.pos.copy()
				));
			} else if (this.current_char == '}') {
				tokens.add(new Token(
					Token.RCURLY,
					this.current_char,
					this.pos.copy()
				));
			} else if (this.current_char == '[') {
				tokens.add(new Token(
					Token.LSQUARE,
					this.current_char,
					this.pos.copy()
				));
			} else if (this.current_char == ']') {
				tokens.add(new Token(
					Token.RSQUARE,
					this.current_char,
					this.pos.copy()
				));
			} else if (this.current_char == '(') {
				tokens.add(new Token(
					Token.LPAREN,
					this.current_char,
					this.pos.copy()
				));
			} else if (this.current_char == ')') {
				tokens.add(new Token(
					Token.RPAREN,
					this.current_char,
					this.pos.copy()
				));
			} else if (this.current_char == '"' || this.current_char == '\'') {
				Object res = this.make_str();
				if (res instanceof Error) {
					return (Error) res;
				}
				tokens.add((Token) res);
			} else if (this.current_char >= '0' && this.current_char <= '9') {
				Object res = this.make_num();
				if (res instanceof Error) {
					return (Error) res;
				}
				tokens.add((Token) res);
				continue;
			} else if (this.current_char == '-') {
				Position pos = this.pos;
				this.advance();
				while (this.current_char == ' ' || this.current_char == '\n' || this.current_char == '\t') {
					this.advance();
				}
				if (!(this.current_char >= '0' && this.current_char <= '9')) {
					return new Error(pos, "invalid syntax near '-'");
				}
				Object res = this.make_num();
				if (res instanceof Error) {
					return (Error) res;
				}
				if (((Token) res).value instanceof Long) {
					((Token) res).value = - (Long) ((Token) res).value;
				} else {
					((Token) res).value = - (Double) ((Token) res).value;
				}
				tokens.add((Token) res);
				continue;
			} else if (
				(this.current_char >= 'a' && this.current_char <= 'z')
				|| (this.current_char >= 'A' && this.current_char <= 'Z')
				|| this.current_char == '_'
			) {
				Token res = this.make_identifier();
				if (Token.KEYWORDS.contains(res.value)) {
					res.type = "keyword";
				}
				tokens.add(res);
				continue;
			} else if (this.current_char == '#') {
				this.advance();
				if (this.current_char == '!') {
					while (this.current_char != '#' && this.current_char != '\0') {
						this.advance();
					}
				} else {
					while (this.current_char != '\n' && this.current_char != '\0') {
						this.advance();
					}
				}
				continue;
			} else if (this.current_char == '$') {
				Position start_pos = this.pos.copy();
				this.advance();
				while (this.current_char == ' ' || this.current_char == '\n' || this.current_char == '\t') {
					this.advance();
				}
				if (this.current_char == '\0') {
					return new Error(
						start_pos,
						"symbol '$' near <eof>"
					);
				}
					if (!(
					(this.current_char >= 'a' && this.current_char <= 'z')
					|| (this.current_char >= 'A' && this.current_char <= 'Z')
					|| this.current_char == '_')
				) {
					return new Error(
						start_pos,
						String.format("symbol '$' near '%c'", this.current_char)
					);
				}
				Token res = this.make_identifier();
				res.type = Token.VARIABLE;
				tokens.add(res);
				continue;
			} else if (this.current_char == ' ' || this.current_char == '\n' || this.current_char == '\t' || (int) this.current_char == 13) {}
			else {
				return new Error(
					this.pos,
					String.format("unexpected symbol near '%c'", this.current_char)
				);
			}
			this.advance();
		}

		tokens.add(new Token(Token.EOF, '\0', this.pos));

		return tokens;
	}

	private Object make_str() {
		char delimiter = this.current_char;
		String res = "";
		Position start_pos = this.pos.copy();
		boolean inSkip = false;
		this.advance();

		while (this.current_char != '\0' && this.current_char != delimiter && this.current_char != '\n') {
			if (inSkip) {
				inSkip = false;
				String _char;
				if (this.current_char == 'n') {
					_char = "\n";
				} else if (this.current_char == 't') {
					_char = "\t";
				} else if (this.current_char == 'b') {
					_char = "\b";
				} else if (this.current_char == 'r') {
					_char = "\r";
				} else {
					_char = String.valueOf(this.current_char);
				}
				res += _char;
				this.advance();
				continue;
			}
			if (this.current_char == '\\') {
				inSkip = true;
				this.advance();
				continue;
			}
			res += String.valueOf(this.current_char);
			this.advance();
		}

		if (this.current_char == '\0') {
			return new Error(
				start_pos,
				"unfinished string near <eof>"
			);
		} else if (this.current_char == '\n') {
			return new Error(
				start_pos,
				String.format("unfinished string near '%s'", res)
			);
		}

		return new Token(Token.STR, res, start_pos);
	}

	private Token make_identifier() {
		String res = String.valueOf(this.current_char);
		Position start_pos = this.pos.copy();
		this.advance();

		while (
			(this.current_char >= 'a' && this.current_char <= 'z')
			|| (this.current_char >= 'A' && this.current_char <= 'Z')
			|| (this.current_char >= '0' && this.current_char <= '9')
			|| this.current_char == '_'
		) {
			res += String.valueOf(this.current_char);
			this.advance();
		}

		if (res.equals("true")) {
			return new Token(Token.BOOL, true, start_pos);
		} else if (res.equals("false")) {
			return new Token(Token.BOOL, false, start_pos);
		} else if (res.equals("none")) {
			return new Token(Token.BOOL, new None(), start_pos);
		}

		return new Token(Token.IDENTIFIER, res, start_pos);
	}

	private Object make_num() {
		String res = String.valueOf(this.current_char);
		Position start_pos = this.pos.copy();
		this.advance();

		while ((this.current_char >= '0' && this.current_char <= '9') || this.current_char == '.') {
			res += String.valueOf(this.current_char);
			this.advance();
		}

		Pattern pattern = Pattern.compile("[^\\.]*\\.");
		Matcher matcher = pattern.matcher(res);
		int dot_count = 0;
		while (matcher.find()) {
			dot_count++;
		}

		if (dot_count > 1) {
			return new Error(
				start_pos,
				String.format("malformed number near '%s'", res)
			);
		}

		if (dot_count == 0) {
			try {
				return new Token(Token.NUM, Long.valueOf(res), start_pos);
			} catch (NumberFormatException e) {
				return new Error(
					start_pos,
					String.format("too many digits near '%s'", res)
				);
			}
		} else {
			return new Token(Token.NUM, Double.valueOf(res), start_pos);
		}
	}
}

class Traceback implements Serializable {
	ArrayList<Position> stacks;

	public Traceback() {
		this.stacks = new ArrayList<Position>();
	}

	public void register(Position pos) {
		this.stacks.add(pos);
	}

	public void unregister() {
		this.stacks.remove(this.stacks.size() - 1);
	}

	public String as_string() {
		String res = "";
		int idx = 0;
		for (Position pos : this.stacks) {
			res += "  from ";
			res += pos.src + ":";
			res += String.valueOf(pos.ln) + ":";
			res += String.valueOf(pos.col);
			idx++;
			if (idx != this.stacks.size()) {
				res += "\n";
			}
		}
		return res;
	}
}

class None implements Serializable {
	public None() {}
}

class Group implements Serializable {
	ArrayList<Task> tokens;
	ArrayList<Token> obj_attrs = new ArrayList<Token>();
	
	public Group(ArrayList<Task> tokens) {
		this.tokens = tokens;
	}

	@SuppressWarnings("unchecked")
	public Group copy() {
        return new Group((ArrayList<Task>) this.tokens.clone());
    }
}

class Table implements Serializable {
	HashMap<Object, Object> values;
	HashMap<Object, Object> classes = new HashMap<Object, Object>();
	HashMap<Object, Object> edits = new HashMap<Object, Object>();
	HashMap<Object, Object> editClasses = new HashMap<Object, Object>();
	ArrayList<Token> obj_attrs = new ArrayList<Token>();
	
	public Table(ArrayList<Object> values) {
		this.values = new HashMap<Object, Object>();
		for (Object val : values) {
			this.values.put(Long.valueOf(this.values.size()), val);
		}
	}
	
	public Table(HashMap<Object, Object> values) {
		this.values = values;
	}
	
	public Table() {
		this.values = new HashMap<Object, Object>();
	}
	
	public Object get(Object key) {
		Object res = this.values.get(key);
		if (res == null) {
			return new None();
		}
		return res;
	}
	
	public Object getClass(Object key) {
		Object res = this.classes.get(key);
		if (res == null) {
			return new None();
		}
		return res;
	}
	
	public void setClass(Object key, Object value) {
		this.classes.put(key, value);
		this.editClasses.put(key, value);
	}
	
	public void set(Object key, Object value) {
		this.values.put(key, value);
		this.edits.put(key, value);
	}

	public void clearEdits() {
		this.edits.clear();
	}
	
	public int len() {
		return this.values.size();
	}

	public void clear() {
		this.values.clear();
	}

	public void remove(Object key) {
		this.values.remove(key);
	}

	@SuppressWarnings("unchecked")
	public Table deepCopy() {
        HashMap<Object, Object> deepCopyValues = new HashMap<>();
        HashMap<Object, Object> deepCopyClasses = new HashMap<>();

        for (Object key : ((HashMap<Object, Object>) this.values.clone()).keySet()) {
            Object value = this.values.get(key);
			
            deepCopyValues.put(key, value);
        }

        for (HashMap.Entry<Object, Object> entry : this.classes.entrySet()) {
            Object key = entry.getKey();
            Object value = entry.getValue();
            Object copiedValue = this.customCopy(value);
			
            deepCopyClasses.put(key, copiedValue);
        }

        Table res =  new Table(deepCopyValues);
		res.classes = deepCopyClasses;
		return res;
    }

	private Object customCopy(Object original) {
        if (original instanceof Cloneable) {
            try {
                return original.getClass().getMethod("clone").invoke(original);
            } catch (Exception e) {
				return original;
            }
        }

        return original;
    }
}

class PrefixCall implements Serializable {
	Token var;
	ArrayList<Object> args;
	
	public PrefixCall(Token var, ArrayList<Object> args) {
		this.var = var;
		this.args = args;
	}
}

class PrlxClass implements Serializable {
	Token className;
	Group classBody;
	Table attrs = new Table();
	ArrayList<Token> obj_attrs = new ArrayList<Token>();
	Interpreter _inter;

	public PrlxClass(Token name, Group body) {
		this.className = name;
		this.classBody = body;
	}

	public Object loadAttrs(Table global) {
		attrs.clear();
		global.clearEdits();
		Interpreter interpreter = new Interpreter(this.classBody.tokens);
		interpreter.traceback = _inter.traceback;
		interpreter.global = global.deepCopy();
		Object error = interpreter.start();
		if (error instanceof Error) {
			return error;
		}
		this.attrs = new Table(interpreter.global.edits).deepCopy();
		for (HashMap.Entry<Object, Object> prlxClass : interpreter.global.editClasses.entrySet()) {
			this.attrs.setClass(prlxClass.getKey(), prlxClass.getValue());
		}
		return new None();
	}
}

class Task implements Serializable {
	int taskId;
	ArrayList<Object> params;

	public Task(int taskId, ArrayList<Object> params) {
		this.taskId = taskId;
		this.params = params;
	}
}

class Parser implements Serializable {
	Object _external;
	ArrayList<Token> tokens;
	int idx;
	Token tok;
	int tokensSize;

	public Parser(ArrayList<Token> tokens) {
		this.tokensSize = tokens.size();
		this.tokens = tokens;
		this.idx = -1;
		this.advance();
	}

	private void advance() {
		this.idx++;
		if (this.tokensSize == 0) {
			this.tok = null;
		} else if (this.idx >= this.tokensSize) {
			Token end = this.tokens.get(this.tokensSize - 1).copy();
			end.type = Token.END;
			end.value = "";
			this.tok = end;
		} else {
			this.tok = this.tokens.get(this.idx);
		}
	}

	@SuppressWarnings("unchecked")
	public Object start() {
		ArrayList<Task> tasks = new ArrayList<Task>();
		if (this.tok == null) {
			return tasks;
		}

		while (!this.tok.endofcode()) {
			if (this.tok.match(Token.VARIABLE)) {
				Object tok = this.getOneValue();
				if (tok instanceof Error) {
					return tok;
				}
				Token main_tok = (Token) tok;
				boolean func = false;
				if (this.tok.match(Token.COLON)) {
					func = true;
					this.advance();
				}
				Object values = this.getValues();
				if (
					!func
					&& this.tok.match(Token.COLON)
					&& ((ArrayList<Object>) this._external).size() == 1
				) {
					if (!(((ArrayList<Object>) this._external).get(0) instanceof Group)) {
						return values;
					}
					ArrayList<Token> params = new ArrayList<Token>();
					this.advance();
					while (!this.tok.end()) {
						if (!this.tok.match(Token.VARIABLE)) {
							return new Error(
								this.tok.pos,
								String.format("variable expected near '%s'", this.tok.value)
							);
						}
						params.add(this.tok);
						this.advance();
					}
					ArrayList<Object> res = new ArrayList<Object>();
					res.add(main_tok);
					res.add(((ArrayList<Object>) this._external).get(0));
					res.add(params);
					tasks.add(new Task(11, res));
					continue;
				}
				if (values instanceof Error) {
					return values;
				}
				ArrayList<Object> _values = (ArrayList<Object>) values;
				Object value;
				if (func) {
					value = _values;
				} else if (_values.size() == 0) {
					value = new None();
				} else if (_values.size() == 1) {
					value = _values.get(0);
				} else {
					value = new Table(_values);
				}
				int Id = 0;
				if (func) {
					Id = 1;
				}
				tasks.add(new Task(Id, new ArrayList<Object>(List.of(main_tok, value))));
				continue;
			} else if (this.tok.match(Token.KEYWORD)) {
				Token keyword = this.tok;
				this.advance();
				if (keyword.value.equals("if")) {
					Object res = this.if_statement(keyword);
					if (res instanceof Error) {
						return res;
					}
					Task task = (Task) res;
					
					// Else/ElseIf Statements
					while (this.tok.value.equals("else")) {
						this.advance();
						if (this.tok.match(Token.KEYWORD) && (this.tok.value.equals("if"))) {
							keyword = this.tok;
							this.advance();
							Object eires = this.if_statement(keyword);
							if (eires instanceof Error) {
								return eires;
							}
							((Task) eires).taskId = 3;
							task.params.add((Task) eires);
						} else {
							if (!this.tok.match(Token.LCURLY)) {
								if (this.tok.match(Token.EOF)) {
									return new Error(
										keyword.pos, 
										"expected '{' near token <eof>"
									);
								}
								return new Error(
									keyword.pos, 
									String.format("expected '{' near token '%s'", this.tok.value)
								);
							}
							Object codeBlock = this.getOneValue();
							if (codeBlock instanceof Error) {
								return codeBlock;
							}
							ArrayList<Object> eres = new ArrayList<Object>();
							eres.add(keyword);
							eres.add(codeBlock);
							task.params.add(new Task(4, eres));
							break;
						}
					}
					tasks.add(task);
					continue;
				} else if (keyword.value.equals("loop")) {
					int taskId;
					if (this.tok.match(Token.LCURLY)) {
						Object codeBlock = this.getOneValue();
						if (codeBlock instanceof Error) {
							return codeBlock;
						}
						ArrayList<Object> res = new ArrayList<Object>();
						res.add(keyword);
						res.add(codeBlock);
						tasks.add(new Task(6, res));
						continue;
					} else if (this.tok.match(Token.KEYWORD) && this.tok.value.equals("if")) {
						taskId = 7;
						this.advance();
					} else {
						taskId = 5;
					}
					Object res = this.if_statement(keyword);
					if (res instanceof Error) {
						return res;
					}
					Task task = (Task) res;
					task.taskId = taskId;
					tasks.add(task);
					continue;
				} else if (keyword.value.equals("skip")) {
					if (!this.tok.end()) {
						return new Error(
							this.tok.pos,
							String.format("skip expected end-of-expr near '%s'", this.tok.value)
						);
					}
					tasks.add(new Task(8, new ArrayList<Object>(List.of(
						keyword
					))));
				} else if (keyword.value.equals("break")) {
					if (!this.tok.end()) {
						return new Error(
							this.tok.pos,
							String.format("break expected end-of-expr near '%s'", this.tok.value)
						);
					}
					tasks.add(new Task(9, new ArrayList<Object>(List.of(
						keyword
					))));
				} else if (keyword.value.equals("class")) {
					if (!this.tok.match(Token.IDENTIFIER)) {
						return new Error(
							this.tok.pos,
							String.format("identifier expected near '%s'", this.tok.value)
						);
					}
					Token className = this.tok;
					this.advance();
					if (!this.tok.match(Token.LCURLY)) {
						return new Error(
							this.tok.pos,
							String.format("'{' expected near '%s'", this.tok.value)
						);
					}

					Object body = this.getGroup();
					if (body instanceof Error) {
						return body;
					}
					Group classBody = (Group) body;
					tasks.add(new Task(10, new ArrayList<Object>(List.of(
						keyword,
						new PrlxClass(className, classBody)
					))));
					continue;
				} else if (keyword.value.equals("return")) {
					Object values = this.getValues();
					if (values instanceof Error) {
						return values;
					}
					ArrayList<Object> _values = (ArrayList<Object>) values;
					Object value;
					if (_values.size() == 0) {
						value = new None();
					} else if (_values.size() == 1) {
						value = _values.get(0);
					} else {
						value = new Table(_values);
					}
					ArrayList<Object> res = new ArrayList<Object>();
					res.add(keyword);
					res.add(value);
					tasks.add(new Task(14, res));
				} else if (keyword.value.equals("require")) {
					ArrayList<Token> imports = new ArrayList<Token>();
					while (!this.tok.end()) {
						if (this.tok.match(Token.STR)) {}
						else if (this.tok.match(Token.IDENTIFIER)) {}
						else if (this.tok.match(Token.VARIABLE)) {}
						else {
							return new Error(
								this.tok.pos,
								String.format("identifier, variable or str expected near '%s'", this.tok.value)
							);
						}
						imports.add(this.tok);
						this.advance();
					}
					tasks.add(new Task(16, new ArrayList<Object>(
						List.of(keyword, imports)
					)));
				}
			} else if (this.tok.match(Token.IDENTIFIER)) {
				Token main_tok = this.tok;
				Object var = this.getOneValue();
				if (var instanceof Error) {
					return var;
				}
				Token prlxClass = (Token) var;
				if (this.tok.match(Token.VARIABLE)) {
					Token variable_tok = this.tok;
					this.advance();
					Object arguments = this.getValues();
					if (arguments instanceof Error) {
						return arguments;
					}
					tasks.add(new Task(15, new ArrayList<Object>(
						List.of(main_tok, variable_tok, arguments)
					)));
					continue;
				}
				if (prlxClass.obj_attrs.size() == 0) {
					return new Error(
						tok.pos,
						String.format("cannot assign class near '%s'", main_tok.value)
					);
				}
				boolean func = this.tok.match(Token.COLON);
				if (func) {this.advance();}

				Object values =  this.getValues();
				if (
					!func
					&& this.tok.match(Token.COLON)
					&& ((ArrayList<Object>) this._external).size() == 1
				) {
					if (!(((ArrayList<Object>) this._external).get(0) instanceof Group)) {
						return values;
					}
					ArrayList<Token> params = new ArrayList<Token>();
					this.advance();
					while (!this.tok.end()) {
						if (!this.tok.match(Token.VARIABLE)) {
							return new Error(
								this.tok.pos,
								String.format("variable expected near '%s'", this.tok.value)
							);
						}
						params.add(this.tok);
						this.advance();
					}
					ArrayList<Object> res = new ArrayList<Object>();
					res.add(main_tok);
					res.add(((ArrayList<Object>) this._external).get(0));
					res.add(params);
					tasks.add(new Task(11, res));
					continue;
				}
				if (values instanceof Error) {
					return values;
				}
				ArrayList<Object> _values = (ArrayList<Object>) values;

				Object value;
				if (func) {
					value = _values;
				} else if (_values.size() == 0) {
					value = new None();
				} else if (_values.size() == 1) {
					value = _values.get(0);
				} else {
					value = new Table(_values);
				}
				int Id = func ? 13 : 12;
				tasks.add(new Task(Id, new ArrayList<Object>(
					List.of(var, value)
				)));
				continue;
			}
			this.advance();
		}
		return tasks;
	}

	private Object if_statement(Token keyword) {
		Object expr = this.getOneValue();
		if (expr instanceof Error) {
			return expr;
		}
		if (!this.tok.match(Token.LCURLY)) {
			if (this.tok.match(Token.EOF)) {
				return new Error(
					keyword.pos, 
					"expected '{' near token <eof>"
				);
			}
			return new Error(
				keyword.pos, 
				String.format("expected '{' near token '%s'", this.tok.value)
			);
		}
		Object codeBlock = this.getOneValue();
		if (codeBlock instanceof Error) {
			return codeBlock;
		}
		ArrayList<Object> res = new ArrayList<Object>();
		res.add(keyword);
		res.add(expr);
		res.add(codeBlock);
		return new Task(2, res);
	}

	private Object getValues() {
		ArrayList<Object> args = new ArrayList<Object>();
		if (this.tok == null) {
			return args;
		}

		while (!this.tok.end()) {
			Object res = this.getOneValue();
			if (res instanceof Error) {
				this._external = args;
				return res;
			}
			args.add(res);

		}

		return args;
	}

	private Object getOneValue() {
		Object fin_res;
		if (this.tok.match(Token.STR)) {
			fin_res = this.tok;
		} else if (this.tok.match(Token.NUM)) {
			fin_res = this.tok;
		} else if (this.tok.match(Token.BOOL)) {
			fin_res = this.tok;
		} else if (this.tok.match(Token.NONE)) {
			fin_res = this.tok;
		} else if (this.tok.match(Token.LSQUARE)) {
			Object res = this.getPrefixCall();
			if (res instanceof Error) {
				return res;
			}
			fin_res = res;
		} else if (this.tok.match(Token.LPAREN)) {
			Object res = this.getTable();
			if (res instanceof Error) {
				return res;
			}
			fin_res = res;
		} else if (this.tok.match(Token.LCURLY)) {
			Object res = this.getGroup();
			if (res instanceof Error) {
				return res;
			}
			fin_res = res;
		} else if (this.tok.match(Token.VARIABLE)) {
			fin_res = this.tok;
		} else if (this.tok.match(Token.IDENTIFIER)) {
			fin_res = this.tok;
		} else {
			return new Error(
				this.tok.pos,
				String.format("unexpected token near '%s'", String.valueOf(this.tok.value))
			);
		}
		this.advance();
		boolean noAttrs = false;
		if (fin_res instanceof Token) {
			if (((Token) fin_res).match(Token.NONE)) {
				noAttrs = true;
			} else if (((Token) fin_res).match(Token.BOOL)) {
				noAttrs = true;
			} else if (((Token) fin_res).match(Token.NUM)) {
				noAttrs = true;
			}
		} else if (fin_res instanceof Group) {
			noAttrs = true;
		} else if (fin_res instanceof PrefixCall) {
			noAttrs = true;
		} else if (fin_res instanceof HashMap) {
			noAttrs = true;
		}
		if (noAttrs) {
			return fin_res;
		}
		while (this.tok.match(Token.DOT)) {
			this.advance();
			if (!this.tok.match(Token.IDENTIFIER)) {
				return new Error(
					this.tok.pos,
					String.format("identifier expected near '%s'", this.tok.value)
				);
			}
			if (fin_res instanceof Token) {
				((Token) fin_res).obj_attrs.add(this.tok);
			} else if (fin_res instanceof Table) {
				((Table) fin_res).obj_attrs.add(this.tok);
			}
			this.advance();
		}
		return fin_res;
	}

	@SuppressWarnings("unchecked")
	private Object getPrefixCall() {
		this.advance();
		if (!this.tok.match(Token.VARIABLE) && !this.tok.match(Token.IDENTIFIER)) {
			return new Error(
				this.tok.pos,
				String.format("expected function near '%s'", this.tok.value)
			);
		}
		Object _func = this.getOneValue();
		if (_func instanceof Error) {
			return _func;
		}
		Token func = (Token) _func;
		if (!this.tok.match(Token.COLON)) {
			return new Error(
				this.tok.pos,
				String.format("expected ':' near '%s'", this.tok.value)
			);
		}
		
		this.advance();
		this.getValues();
		if (!this.tok.match(Token.RSQUARE)) {
			return new Error(
				this.tok.pos,
				String.format("expected ']' near '%s'", this.tok.value)
			);
		}

		return new PrefixCall(func, (ArrayList<Object>) this._external);
	}

	@SuppressWarnings("unchecked")
	private Object getTable() {
		HashMap<Object, Object> res = new HashMap<Object, Object>();
		this.advance();
		while (!(this.tok.match(Token.RPAREN)) && !(this.tok.endofcode())) {
			if (this.tok.match(Token.SEMICOLON)) {
				this.advance();
			}
			Object key = this.getOneValue();
			if (key instanceof Error) {
				return key;
			}

			if (this.tok.match(Token.SEMICOLON)) {
				res.put(Long.valueOf(res.size()), key);
				this.advance();
				continue;
			} else if (this.tok.match(Token.RPAREN)) {
				res.put(Long.valueOf(res.size()), key);
				continue;
			}

			Object error = this.getValues();
			if (error instanceof Error && !this.tok.match(Token.RPAREN)) {
				return new Error(
					this.tok.pos,
					String.format("expected ')' near '%s'", this.tok.value)
				);
			}
			ArrayList<Object> args;

			if (error instanceof ArrayList) {
				args = (ArrayList<Object>) error;
			} else {
				args = (ArrayList<Object>) this._external;
			}

			Object value = args;

			if (args.size() == 1) {
				value = args.get(0);
			} else if (args.size() == 0) {
				value = new None();
			}
			res.put(key, value);
		}

		return res;
	}

	@SuppressWarnings("unchecked")
	private Object getGroup() {
		this.advance();
		ArrayList<Token> res = new ArrayList<Token>();
		int count = 0;

		while (!this.tok.endofcode()) {
			if (this.tok.match(Token.LCURLY)) {
				count++;
			} else if (this.tok.match(Token.RCURLY)) {
				count--;
				if (count < 0) {
					break;
				}
			}
			res.add(this.tok);
			this.advance();
		}

		if (this.tok.match(Token.EOF)) {
			return new Error(
				this.tok.pos,
				"'}' expected near <eof>"
			);
		}
		Parser parser = new Parser(res);
		Object parseRes = parser.start();
		if (parseRes instanceof Error) {
			return parseRes;
		}
		return new Group((ArrayList<Task>) parseRes);
	}
}

class Function implements Serializable {
	Token var;
	Group group;
	ArrayList<Token> params;
	Interpreter _inter;

	public Function(Token var, Group group, ArrayList<Token> params) {
		this.var = var;
		this.group = group;
		this.params = params;
	}
	
	public Object call(ArrayList<Object> params, Table global) {
		HashMap<String, Object> fin_params = new HashMap<String, Object>();
		int curSize = this.params.size();
		int size = params.size();
		if (size >= curSize) {
			for (int idx = 0; idx < curSize; idx++) {
				fin_params.put((String) this.params.get(idx).value, params.get(idx));
			}
		} else {
			for (int idx = 0; idx < size; idx++) {
				fin_params.put((String) this.params.get(idx).value, params.get(idx));
			}
			for (int idx = size; idx < curSize; idx++) {
				fin_params.put((String) this.params.get(idx).value, new None());
			}
		}

		Interpreter interpreter = new Interpreter(this.group.tokens);
		interpreter.global = global.deepCopy();
		interpreter.traceback = _inter.traceback;
		
		for (HashMap.Entry<String, Object> entry : fin_params.entrySet()) {
			interpreter.global.set(entry.getKey(), entry.getValue());
		}

		Object res = interpreter.start();
		if (res instanceof Error) {} else {interpreter.traceback.unregister();}
		return res;
	}
}

class SystemFunction implements Serializable {
	public static HashMap<String, Method> imported_methods = new HashMap<String, Method>();
	public static HashMap<String, Object> imported_instances = new HashMap<String, Object>();
	private String funcname;
	private boolean imported_func = false;
	public static Position pos_call;
	public static Interpreter _inter;

	public SystemFunction(String funcname) {
		this.funcname = funcname;
	}

	public SystemFunction(String funcname, boolean imported_func) {
		this.funcname = funcname;
		this.imported_func = imported_func;
	}

	@SuppressWarnings({ "unchecked", "rawtypes" })
	public Object call(Object... args) {
		HashMap<String, Class<?>[]> FunctionParams = new HashMap<String, Class<?>[]>();
		Class<?> systemFunction = SystemFunction.class;
		for (Method method : systemFunction.getDeclaredMethods()) {
			if (method.getName().length() < 7) {
				continue;
			}
			if (!method.getName().substring(0, 7).equals("prolix_")) {
				continue;
			}
			FunctionParams.put(method.getName(), method.getParameterTypes());
		}

		Method method = null;
		Object instance = null;
		if (this.imported_func) {
			method = SystemFunction.imported_methods.get(this.funcname);
			instance = SystemFunction.imported_instances.get(this.funcname);
		}
		try {
			if (method == null) {
				Class<?>[] params = FunctionParams.get("prolix_" + this.funcname);
				method = SystemFunction.class.getMethod("prolix_" + this.funcname, params);
				instance = this;
			}
			Object[] final_args = new Object[method.getParameterCount()];
			if (args.length >= method.getParameterCount()) {
				for (int idx = 0; idx < method.getParameterCount(); idx++) {
					final_args[idx] = args[idx];
				}
			} else {
				for (int idx = 0; idx < args.length; idx++) {
					final_args[idx] = args[idx];
				}
				for (int idx = args.length; idx < method.getParameterCount(); idx++) {
					final_args[idx] = new None();
				}
			}
			if (instance != this) {
				for (int idx = 0; idx < final_args.length; idx++) {
					if (final_args[idx] instanceof Table) {
						final_args[idx] = ((Table) final_args[idx]).values;
					} else if (final_args[idx] instanceof None) {
						final_args[idx] = null;
					}
				}
			}
			Object res = method.invoke(instance, final_args);
			if (res == null) {
				return new None();
			} else if (res instanceof HashMap) {
				return new Table((HashMap) res);
			} else if (res instanceof Integer) {
				return Long.valueOf((Integer) res);
			} else if (res instanceof Float) {
				return Double.valueOf((Float) res);
			}
			return res;
		} catch (Exception e) {
			e.printStackTrace();
			return new None();
		}
	}

	public static Object prolix_print(Object obj, Object end) {
		if (end instanceof None) {
			end = "\n";
		}
		if (obj instanceof None) {
			System.out.print("none");
		} else if (obj instanceof PrlxClass) {
			System.out.print(String.format(
				"class: %s",
				Integer.toHexString(obj.hashCode())
			));
		} else if (obj instanceof PrlxObject) {
			PrlxObject prlxObj = (PrlxObject) obj;
			Object repr = prlxObj.mainClass.attrs.get("__repr__");
			if (repr instanceof Function) {
				Function function = (Function) repr;
				SystemFunction._inter.traceback.register(SystemFunction.pos_call);
				function._inter = SystemFunction._inter;
				Object params[] = {prlxObj.mainClass};
				Object res =  function.call(new ArrayList<Object>(List.of(params)), SystemFunction._inter.global);
				SystemFunction.prolix_print(res, "");
			} else if (repr instanceof SystemFunction) {
				SystemFunction method = (SystemFunction) repr;
				Object params[] = {prlxObj.mainClass};
				Object res = method.call(params);
				SystemFunction.prolix_print(res, "");
			} else {
				System.out.print(String.format(
					"%s: %s",
					String.valueOf(((PrlxObject) obj).mainClass.attrs.get("__name__")),
					Integer.toHexString(obj.hashCode())
				));
			}
		} else if (obj instanceof Function) {
			System.out.print(String.format(
				"func: %s",
				Integer.toHexString(obj.hashCode())
			));
		} else if (obj instanceof Table) {
			System.out.print(String.format(
				"table: %s",
				Integer.toHexString(obj.hashCode())
			));
		} else if (obj instanceof Group) {
			System.out.print(String.format(
				"group: %s",
				Integer.toHexString(obj.hashCode())
			));
		} else if (obj instanceof SystemFunction) {
			System.out.print(String.format(
				"func: %s",
				Integer.toHexString(obj.hashCode())
			));
		} else if (obj instanceof Long) {
			if ((Long) obj > Long.MAX_VALUE || (Long) obj < Long.MIN_VALUE) {
				System.out.print("inf");
			} else {
				System.out.print(String.valueOf(obj).toLowerCase());
			}
		} else if (obj instanceof Double) {
			if (Double.isInfinite((Double) obj)) {
				System.out.print("inf");
			} else if (Double.isNaN((Double) obj)) {
				System.out.print("nan");
			} else {
				System.out.print(String.valueOf(obj).toLowerCase());
			}
		} else if (obj instanceof byte[]) {
			System.out.print(String.format(
				"bytes: %s",
				Integer.toHexString(obj.hashCode())
			));
		} else if (obj instanceof java.awt.Font) {
			System.out.print(String.format(
				"font: %s",
				Integer.toHexString(obj.hashCode())
			));
		} else {
			System.out.print(obj);
		}
		System.out.print(end);
		System.out.flush();
		return new None();
	}

	@SuppressWarnings("resource")
	public static String prolix_input() {
		return (new Scanner(System.in)).nextLine();
	}

	public static Object prolix_eq(Object obj1, Object obj2) {
        return obj1.equals(obj2);
    }

    public static Object prolix_ne(Object obj1, Object obj2) {
        return !obj1.equals(obj2);
    }

    public static Object prolix_gt(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return (Long) obj1 > (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Long) obj1 > (Double) obj2;
            } else if (obj2 instanceof String) {
                long obj2_ = 0;
                for (char _char : ((String) obj2).toCharArray()) {
                    obj2_ += (int) _char;
                }
                return (Double) obj1 > obj2_;
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return (Double) obj1 > (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Double) obj1 > (Double) obj2;
            } else if (obj2 instanceof String) {
                long obj2_ = 0;
                for (char _char : ((String) obj2).toCharArray()) {
                    obj2_ += (int) _char;
                }
                return (Double) obj1 > obj2_;
            }
        } else if (obj2 instanceof String) {
            long obj1_ = 0;
                for (char _char : ((String) obj1).toCharArray()) {
                    obj1_ += (int) _char;
                }
            if (obj2 instanceof Long) {
                return obj1_ > (Long) obj2;
            } else if (obj2 instanceof Double) {
                return obj1_ > (Double) obj2;
            } else if (obj2 instanceof String) {
                long obj2_ = 0;
                for (char _char : ((String) obj2).toCharArray()) {
                    obj2_ += (int) _char;
                }
                return obj1_ > obj2_;
            }
        }
        return false;
    }

    public static Object prolix_lt(Object obj1, Object obj2) {
        return !((Boolean) SystemFunction.prolix_gt(obj1, obj2)) && !obj1.equals(obj2);
    }

    public static Object prolix_ge(Object obj1, Object obj2) {
        return (Boolean) SystemFunction.prolix_gt(obj1, obj2) && obj1.equals(obj2);
    }

    public static Object prolix_le(Object obj1, Object obj2) {
        return !((Boolean) SystemFunction.prolix_gt(obj1, obj2));
    }

    public static Object prolix_not(Object obj) {
        return (obj.equals(null)
            || obj.equals(false)
            || obj.equals("")
            || obj.equals(0));
    }
    
    public static Object prolix_and(Object obj1, Object obj2) {
        return !(Boolean) SystemFunction.prolix_not(obj1) && !(Boolean) SystemFunction.prolix_not(obj2);
    }

    public static Object prolix_or(Object obj1, Object obj2) {
        return !(Boolean) SystemFunction.prolix_not(obj1) || !(Boolean) SystemFunction.prolix_not(obj2);
    }

    public static Object prolix_xor(Object obj1, Object obj2) {
        return (Boolean) SystemFunction.prolix_or(obj1, obj2) && !(Boolean) SystemFunction.prolix_and(obj1, obj2);
    }

    public static Object prolix_add(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return (Long) obj1 + (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Long) obj1 + (Double) obj2;
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return (Double) obj1 + (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Double) obj1 + (Double) obj2;
            }
        }
        return null;
    }

    public static Object prolix_sub(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return (Long) obj1 - (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Long) obj1 - (Double) obj2;
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return (Double) obj1 - (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Double) obj1 - (Double) obj2;
            }
        }
        return null;
    }

    public static Object prolix_mul(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return (Long) obj1 * (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Long) obj1 * (Double) obj2;
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return (Double) obj1 * (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Double) obj1 * (Double) obj2;
            }
        }
        return null;
    }

    public static Object prolix_div(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return Double.valueOf((Long) obj1) / Double.valueOf((Long) obj2);
            } else if (obj2 instanceof Double) {
                return ((Long) obj1) / (Double) obj2;
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return (Double) obj1 / Double.valueOf((Long) obj2);
            } else if (obj2 instanceof Double) {
                return (Double) obj1 / (Double) obj2;
            }
        }
        return null;
    }

	public static Object prolix_len(Object obj) {
		if (obj instanceof String) {
			return ((String) obj).length();
		} else if (obj instanceof Table) {
			return ((Table) obj).len();
		} else {
			return new None();
		}
	}

	public static Object prolix_type(Object obj) {
		if (obj instanceof Long) {
			return "num";
		} else if (obj instanceof Double) {
			return "num";
		} else if (obj instanceof String) {
			return "str";
		} else if (obj instanceof Boolean) {
			return "bool";
		} else if (obj instanceof None) {
			return "none";
		} else if (obj instanceof PrlxClass) {
			return "class";
		} else if (obj instanceof Table) {
			return "table";
		} else if (obj instanceof Group) {
			return "group";
		} else if (obj instanceof Function) {
			return "func";
		} else if (obj instanceof SystemFunction) {
			return "func";
		} else if (obj instanceof PrlxObject) {
			return ((PrlxObject) obj).mainClass.attrs.get("__name__");
		} else if (obj instanceof byte[]) {
			return "bytes";
		} else if (obj instanceof java.awt.Font) {
			return "font";
		} else {
			return "unknown";
		}
	}

	public static Object prolix_error(Object msg) {
		return new Error(SystemFunction.pos_call, String.valueOf(msg));
	}

	public static Object prolix_exec(Object str) {
		Main.run("str", String.valueOf(str), SystemFunction._inter.global);
		return new None();
	}

	public static Object prolix_tostr(Object obj) {
		return String.valueOf(obj);
	}

	public static Object prolix_tonum(Object obj) {
		if (obj == null) {
			return new None();
		}

		if (obj instanceof Long || obj instanceof Double) {
			return obj;
		}

		if (obj instanceof String) {
			try {
				Double res = Double.parseDouble((String) obj);
				if (Math.floor(res) == res) {
					return res.longValue();
				}
				return res.doubleValue();
			} catch (NumberFormatException e) {
				return new None();
			}
		}

		return null;
	}

	public static Object prolix_tick() {
		return (System.nanoTime() - ProlixSystem.START_TIME) / 1000000000d;
	}
}

class PrlxObject implements Serializable {
	PrlxClass mainClass;
	String typeName;

	public PrlxObject(PrlxClass mainClass, String typeName) {
		this.mainClass = mainClass;
		this.typeName = typeName;
	}

	public Object _new(Token tok, Interpreter _inter, ArrayList<Object> params) {
		Object func = this.mainClass.attrs.get("__init__");
		ArrayList<Object> fin_params = new ArrayList<Object>();
		fin_params.add(this.mainClass);
		for (Object param : params) {
			fin_params.add(param);
		}
		if (!(func instanceof Function) && !(func instanceof SystemFunction)) {
			return new Error(
				tok.pos,
				String.format("cannot call %s near %s", _inter.getType(func), tok.value)
			);
		}
		if (func instanceof Function) {
			Function _func = (Function) func;
			_inter.traceback.register(tok.pos);
			_func._inter = _inter;
			_func.call(fin_params, _inter.global);
		} else {
			SystemFunction _func = (SystemFunction) func;
			SystemFunction._inter = _inter;
			SystemFunction.pos_call = tok.pos;
			_func.call(fin_params, _inter.global);
		}
		return this;
	}

	public Object call_function(String funcName) {
		
		return new None();
	}
}

class SkipStatement implements Serializable {}

class BreakStatement implements Serializable {}

class Interpreter implements Serializable {
	ArrayList<Task> tasks;
	Table global;
	boolean inLoop = false;
	Traceback traceback;

	public Interpreter(ArrayList<Task> tasks) {
		this.tasks = tasks;
		this.global = new Table();
		this.traceback = new Traceback();
	}

	public Object start() {
		for (Task task : this.tasks) {
			if (task.taskId == 0) {
				Object error = this.variable_assignment(task);
				if (error instanceof Error) {
					return error;
				} else if (!(error instanceof None)) {
					return error;
				}
			} else if (task.taskId == 1) {
				Object error = this.function_call(task);
				if (error instanceof Error) {
					return error;
				} else if (!(error instanceof None)) {
					return error;
				}
			} else if (task.taskId == 2) {
				Object error = this.if_statement(task);
				if (error instanceof Error) {
					return error;
				} else if (!(error instanceof None)) {
					return error;
				}
			} else if (task.taskId == 5) {
				Object error = this.loop_statement(task);
				if (error instanceof Error) {
					return error;
				} else if (!(error instanceof None)) {
					return error;
				}
			} else if (task.taskId == 6) {
				Object error = this.forever_loop_statement(task);
				if (error instanceof Error) {
					return error;
				} else if (!(error instanceof None)) {
					return error;
				}
			} else if (task.taskId == 7) {
				Object error = this.condition_loop_statement(task);
				if (error instanceof Error) {
					return error;
				} else if (!(error instanceof None)) {
					return error;
				}
			} else if (task.taskId == 8) {
				if (!this.inLoop) {
					return new Error(
						((Token) task.params.get(0)).pos,
						"skip outside loop"
					);
				}
				return new SkipStatement();
			} else if (task.taskId == 9) {
				if (!this.inLoop) {
					return new Error(
						((Token) task.params.get(0)).pos,
						"break outside loop"
					);
				}
				return new BreakStatement();
			} else if (task.taskId == 10) {
				Object error = this.class_assignment(task);
				if (error instanceof Error) {
					return error;
				} else if (!(error instanceof None)) {
					return error;
				}
			} else if (task.taskId == 11) {
				Object error = this.function_assignment(task);
				if (error instanceof Error) {
					return error;
				} else if (!(error instanceof None)) {
					return error;
				}
			} else if (task.taskId == 12) {
				Object error = this.class_attribute_assignment(task);
				if (error instanceof Error) {
					return error;
				} else if (!(error instanceof None)) {
					return error;
				}
			} else if (task.taskId == 13) {
				Object error = this.class_method_call(task);
				if (error instanceof Error) {
					return error;
				}
			} else if (task.taskId == 14) {
				Object return_value = this.return_statement(task);
				return return_value;
			} else if (task.taskId == 15) {
				Object error = this.object_assignment(task);
				if (error instanceof Error) {
					return error;
				} else if (!(error instanceof None)) {
					return error;
				}
			} else if (task.taskId == 16) {
				Object error = this.require_statement(task);
				if (error instanceof Error) {
					return error;
				} else if (!(error instanceof None)) {
					return error;
				}
			}
		}
		return new None();
	}

	private Object variable_assignment(Task task) {
		Token tok = (Token) task.params.get(0);
		String var = (String) (tok).value;
		if (tok.obj_attrs.size() > 0) {
			Object res = this.class_attribute_assignment(new Task(-1, new ArrayList<Object>(
				List.of(
					tok,
					task.params.get(1)
				)
			)));
			if (res instanceof Error) {
				return res;
			}
			return new None();
		}
		Object arg = this.refresh(task.params.get(1));
		if (arg instanceof Error) {
			return arg;
		}
		if (arg instanceof Double dou) {
			if (Math.floor(dou) == dou) {
				arg = dou.longValue();
			}
		}
		if (arg instanceof None) {
			this.global.remove(var);
		} else {
			this.global.set(
				var,
				arg
			);
		}
		return new None();
	}

	@SuppressWarnings("unchecked")
	private Object function_call(Task task) {
		Token tok = (Token) task.params.get(0);
		ArrayList<Object> givenParams = (ArrayList<Object>) task.params.get(1);
		ArrayList<Object> params = new ArrayList<Object>();
		for (Object param : givenParams) {
			Object res = this.refresh(param);
			if (res instanceof Error) {
				return res;
			}
			params.add(res);
		}
		if (tok.obj_attrs.size() > 0) {
			Object _return = this.callMethod(tok, params);
			if (_return instanceof Error) {
				return _return;
			}
			return new None();
		}
		Object _return = this.call(tok, params);
		if (_return instanceof Error) {
			return _return;
		}
		return new None();
	}

	private Object if_statement(Task task) {
		// Token keyword = (Token) task.params.get(0);
		Object expr = this.refresh(task.params.get(1));
		if (expr instanceof Error) {
			return expr;
		}
		Group codeBlock = (Group) task.params.get(2);
		boolean cond = true;

		if (
			expr.equals("")
			|| expr.equals(0)
			|| expr.equals(false)
			|| expr instanceof None
		) {
			cond = false;
		}

		int size = task.params.size();

		if (cond) {
			Object res = this.execGroup(codeBlock);
			if (res instanceof Error) {
				return res;
			} else if (!(res instanceof None)) {
				return res;
			}
		} else if (size >= 3) {
			for (int idx = 3; idx < size; idx++) {
				Task else_task = (Task) task.params.get(idx);
				if (else_task.taskId == 3) {
					Object res = this.if_statement(else_task);
					if (res instanceof Error) {
						return res;
					}
					if (res.equals(true)) {
						cond = true;
						break;
					}
				} else {
					codeBlock = (Group) else_task.params.get(1);
					Object res = this.execGroup(codeBlock);
					if (res instanceof Error) {
						return res;
					} else if (!(res instanceof None)) {
						return res;
					}
				}
			}
		}
		return new None();
	}

	private Object loop_statement(Task task) {
		// Token keyword = (Token) task.params.get(0);
		Object expr = this.refresh(task.params.get(1));
		if (expr instanceof Error) {
			return expr;
		}
		Group codeBlock = (Group) task.params.get(2);
		long amount = 0;

		if (expr instanceof String) {
			amount = ((String) expr).length();
		} else if (expr instanceof Long) {
			amount = (Long) expr;
		} else if (expr instanceof Double) {
			amount = ((Double) expr).longValue();
		} else if (expr instanceof Table) {
			amount = ((Table) expr).values.size();
		} else if (expr.equals(true)) {
			amount = 1;
		}

		for (long count = 0; count < amount; count++) {
			Object res = this.execGroup(codeBlock.copy(), true);
			if (res instanceof Error) {
				return res;
			} else if (!(res instanceof None)) {
				return res;
			}
		}
		return new None();
	}

	private Object forever_loop_statement(Task task) {
		// Token keyword = (Token) task.params.get(0);
		Group codeBlock = (Group) task.params.get(1);
		while (true) {
			Object res = this.execGroup(codeBlock, true);
			if (res instanceof Error) {
				return res;
			} else if (!(res instanceof None)) {
				return res;
			}
		}
	}

	private Object condition_loop_statement(Task task) {
		// Token keyword = (Token) task.params.get(0);
		Object expr = this.refresh(task.params.get(1));
		if (expr instanceof Error) {
			return expr;
		}
		Group codeBlock = (Group) task.params.get(2);
		boolean cond = true;

		if (
			expr.equals("")
			|| expr.equals(0)
			|| expr.equals(false)
			|| expr instanceof None
		) {
			cond = false;
		}

		while (cond) {
			Object res = this.execGroup(codeBlock, true);
			if (res instanceof Error) {
				return res;
			} else if (!(res instanceof None)) {
				return res;
			}
			expr = this.refresh(task.params.get(1));
			if (expr instanceof Error) {
				return expr;
			}
			cond = true;

			if (
				expr.equals("")
				|| expr.equals(0)
				|| expr.equals(false)
				|| expr instanceof None
			) {
				cond = false;
			}
		}
		return new None();
	}

	private Object class_assignment(Task task) {
		// Token keyword = (Token) task.params.get(0);
		PrlxClass prlxClass = (PrlxClass) task.params.get(1);
		prlxClass._inter = this;
		Object err = prlxClass.loadAttrs(this.global);
		if (err instanceof Error) {
			return err;
		}
		this.global.setClass(prlxClass.className.value, prlxClass);
		return new None();
	}

	@SuppressWarnings("unchecked")
	private Object function_assignment(Task task) {
		Token var = (Token) task.params.get(0);
		Group group = (Group) task.params.get(1);
		ArrayList<Token> params = (ArrayList<Token>) task.params.get(2);

		this.global.set(var.value, new Function(var, group, params));

		return new None();
	}

	private Object class_attribute_assignment(Task task) {
		Token var = (Token) task.params.get(0);
		Object value = this.refresh(task.params.get(1));
		if (value instanceof Error) {
			return value;
		}
		Token anotherVar = var.copy();
		anotherVar.obj_attrs.remove(anotherVar.obj_attrs.size() - 1);
		Object res = this.refresh(anotherVar);
		if (res instanceof Error) {
			return res;
		}
		Object parentAttr = this.loadParentAttr(res, var.obj_attrs);
		if (parentAttr instanceof Error) {
			return parentAttr;
		}
		if (parentAttr instanceof PrlxClass) {
			((PrlxClass) parentAttr).attrs.set(
				var.obj_attrs.get(var.obj_attrs.size() - 1).value,
				value
			);
		}

		return new None();
	}
	
	@SuppressWarnings("unchecked")
	private Object class_method_call(Task task) {
		Token tok = (Token) task.params.get(0);
		ArrayList<Object> _params = (ArrayList<Object>) task.params.get(1);
		ArrayList<Object> params = new ArrayList<Object>();

		for (Object param : _params) {
			Object res = this.refresh(param);
			if (res instanceof Error) {
				return res;
			}
			params.add(res);
		}
		Object _return = this.callMethod(tok, params);
		if (_return instanceof Error) {
			return _return;
		}
		return new None();
	}

	private Object return_statement(Task task) {
		// Token keyword = task.params.get(0);
		Object return_value = task.params.get(1);
		Object res = this.refresh(return_value);
		if (res instanceof Error) {
			return res;
		}
		return res;
	}

	@SuppressWarnings("unchecked")
	private Object object_assignment(Task task) {
		Token class_tok = (Token) task.params.get(0);
		Token var_tok = (Token) task.params.get(1);
		ArrayList<Object> _params = (ArrayList<Object>) task.params.get(2);
		ArrayList<Object> params = new ArrayList<Object>();

		for (Object param : _params) {
			Object res = this.refresh(param);
			if (res instanceof Error) {
				return res;
			}
			params.add(res);
		}

		Object _class = this.global.getClass(class_tok.value);
		String type = this.getType(_class);
		if (type != "class") {
			return new Error(
				class_tok.pos,
				String.format("undefined class named '%s'", class_tok.value)
			); 
		}
		
		PrlxObject prlxObject = new PrlxObject((PrlxClass) _class, (String) var_tok.value);
		prlxObject.mainClass.attrs.set("__name__", prlxObject.mainClass.className.value);
		this.global.set(var_tok.value, prlxObject._new(class_tok, this, params));
		return new None();
	}

	@SuppressWarnings("unchecked")
	private Object require_statement(Task task) {
		// Token keyword = (Token) task.params.get(0);
		ArrayList<Token> imports = (ArrayList<Token>) task.params.get(1);
		for (Token tok : imports) {
			String module;
			if (tok.match(Token.VARIABLE)) {
				Object res = this.refresh(tok);
				if (!(res instanceof String)) {
					return new Error(
						tok.pos,
						String.format("expected str got %s", this.getType(res))
					);
				}
				module = (String) res;
			} else {
				module = (String) tok.value;
			}
			String file_path = "";
			boolean loadClass = false;
			boolean __lib__ = false;
			if (Files.exists(Paths.get("__lib__")) && Files.isDirectory(Paths.get("__lib__"))) {
				__lib__ = true;
			}
			if (tok.match(Token.IDENTIFIER)) {
				file_path = module + ".prlx";
				if (!new File(file_path).exists()) {
					if (__lib__) {
						file_path = ProlixSystem.HOME + "/__lib__/" + file_path;
					}
					if (!new File(file_path).exists()) {
						file_path = module + ".class";
						loadClass = true;
						if (!new File(file_path).exists()) {
							if (__lib__) {
								file_path = ProlixSystem.HOME + "/__lib__/" + file_path;
							}
							if (!new File(file_path).exists()) {
								return new Error(
									tok.pos,
									String.format("module '%s' not found", tok.value)
								);
							}
						}
					}
				}
			} else {
				file_path = module;
				loadClass = file_path.endsWith(".class");
			}
			File file;
			if (Paths.get(file_path).isAbsolute()) {
				file = new File(file_path);
			} else {
				file = new File(ProlixSystem.HOME, file_path);
			}
			String string = "";
			Scanner scanner;
			try {
				scanner = new Scanner(file);
				while (scanner.hasNextLine()) {
					string += scanner.nextLine();
					string += scanner.hasNextLine() ? "\n" : "";
				}
			} catch (FileNotFoundException e) {
				return new Error(
					tok.pos,
					String.format("module '%s' not found", tok.value)
				);
			}
			scanner.close();

			Path current_abspath = Paths.get(file.getAbsolutePath());
			Path current_dir = Paths.get(System.getProperty("user.dir"));
			Path relative_path = current_dir.relativize(current_abspath);
			String path = relative_path.toString().replace("\\", "/");

			if (loadClass) {
				try {
					URL url = (new File(Paths.get(file.getAbsolutePath()).getParent().toString())).toURI().toURL();
					URLClassLoader classLoader = new URLClassLoader(new URL[]{url});
					String mainClassName = file.getName().substring(0, file.getName().length() - 6);
					Class<?> loadedClass = classLoader.loadClass(mainClassName);

					this.loadJavaClass(loadedClass, tok.pos);
					classLoader.close();
				} catch (MalformedURLException | ClassNotFoundException | InstantiationException | IllegalAccessException | IllegalArgumentException | InvocationTargetException | NoSuchMethodException | SecurityException e) {
					e.printStackTrace();
					return new Error(
						tok.pos,
						String.format("malformed class file '%s'", path)
					);
				} catch (IOException e) {
					e.printStackTrace();
				}
				return new None();
			}
			String original_path = ProlixSystem.HOME;
			ProlixSystem.HOME = Paths.get(file.getAbsolutePath()).getParent().toString();
			System.setProperty("user.dir", ProlixSystem.HOME);
			Main.run(path, string, this.global);
			ProlixSystem.HOME = original_path;
		}
		return new None();
	}

	public Object loadJavaClass(Class<?> loadedClass, Position pos) throws InstantiationException, IllegalAccessException, IllegalArgumentException, InvocationTargetException, NoSuchMethodException, SecurityException {
		for (Method method : loadedClass.getDeclaredMethods()) {
			if (Modifier.isStatic(method.getModifiers())) {
				continue;
			}
			if (!method.canAccess(loadedClass.getConstructor().newInstance())) {
				continue;
			}
			SystemFunction.imported_methods.put(method.getName(), method);
			SystemFunction.imported_instances.put(method.getName(), loadedClass.getDeclaredConstructor().newInstance());
			this.global.set(method.getName(), new SystemFunction(method.getName(), true));
		}
		
		for (Field field : loadedClass.getDeclaredFields()) {
			if (Modifier.isStatic(field.getModifiers())) {
				continue;
			}
			if (!field.canAccess(loadedClass.getConstructor().newInstance())) {
				continue;
			}
			this.global.set(field.getName(), field.get(loadedClass.getConstructor().newInstance()));
		}

		return new None();
	}

	public String getType(Object obj) {
		if (obj instanceof Token) {
			return ((Token) obj).type;
		} else if (obj instanceof Group) {
			return "group";
		} else if (obj instanceof Table) {
			return "table";
		} else if (obj instanceof Function) {
			return "func";
		} else if (obj instanceof SystemFunction) {
			return "sysfunc";
		} else if (obj instanceof PrlxClass) {
			return "class";
		} else if (obj instanceof PrlxObject) {
			return "obj";
		} else if (obj instanceof None) {
			return "none";
		}
		return "none";
	}

	private Object execGroup(Group group) {
		Interpreter interpreter = new Interpreter(group.tokens);
		interpreter.traceback = this.traceback;
		interpreter.global = this.global;
		Object res = interpreter.start();
		return res;
	}

	private Object execGroup(Group group, boolean inLoop) {
		Interpreter interpreter = new Interpreter(group.tokens);
		interpreter.global = this.global;
		interpreter.traceback = this.traceback;
		interpreter.inLoop = inLoop;
		Object res = interpreter.start();
		return res;
	}
	
	public Object refreshTable(Table table) {
		HashMap<Object, Object> res = new HashMap<Object, Object>();
		for (HashMap.Entry<Object, Object> entry : table.values.entrySet()) {
			res.put(this.refresh(entry.getKey()), this.refresh(entry.getValue()));
		}
		return new Table(res);
	}
	
	@SuppressWarnings("unchecked")
	public Object refresh(Object value) {
		if (value instanceof Token) {
			if (((Token) value).match(Token.VARIABLE)) {
				Object res = this.global.get(((Token) value).value);
				if (res instanceof PrlxObject) {
					if (((Token) value).obj_attrs.size() > 0) {
						return this.loadAttrs(((PrlxObject) res).mainClass, ((Token) value).obj_attrs);
					}
					return res;
				} else if (res instanceof PrlxClass) {
					return this.loadAttrs(res, ((Token) value).obj_attrs);
				}
				return res;
			} else if (((Token) value).match(Token.IDENTIFIER)) {
				Object obj = this.global.getClass(((Token) value).value);
				return this.loadAttrs(obj, ((Token) value).obj_attrs);
			}
			return ((Token) value).value;
		} else if (value instanceof Group) {
			return (Group) value;
		} else if (value instanceof Table) {
			return this.refreshTable((Table) value);
		} else if (value instanceof PrefixCall) {
			PrefixCall pc = (PrefixCall) value;
			ArrayList<Object> args = new ArrayList<Object>();
			for (Object val : pc.args) {
				args.add(this.refresh(val));
			}
			Object res = this.call(pc.var, args);
			return res;
		} else if (value instanceof PrlxClass) {
			return (PrlxClass) value;
		} else if (value instanceof None) {
			return new None();
		} else if (value instanceof HashMap) {
			return this.refreshTable(new Table((HashMap<Object, Object>) value));
		} else if (value instanceof ArrayList) {
			return this.refreshTable(new Table((ArrayList<Object>) value));
		}
		return value;
	}
	
	public Object call(Token tok, ArrayList<Object> params) {
		Object func = this.refresh(tok);
		if (tok.obj_attrs.size() > 0) {
			Token anotherTok = tok.copy();
			anotherTok.obj_attrs.remove(anotherTok.obj_attrs.size() - 1);
			Object res = this.refresh(anotherTok);
			if (res instanceof Error) {
				return res;
			}
			Object parent = this.loadParentAttr(res, tok.obj_attrs);
			if (parent instanceof Error) {
				return parent;
			}
			if (parent instanceof PrlxObject) {
				ArrayList<Object> params_ = new ArrayList<Object>();
				params_.add(((PrlxObject) parent).mainClass);
				for (Object obj : params) {
					params_.add(obj);
				}
				params = params_;
			}
		}
		String type = this.getType(func);
		if (type != "func" && type != "sysfunc") {
			if (tok.obj_attrs.size() == 0) {
				return new Error(
					tok.pos,
					String.format("cannot call %s near $%s", type, tok.value)
				);
			}
			return new Error(
				tok.obj_attrs.get(tok.obj_attrs.size() - 1).pos,
				String.format("cannot call %s near %s", type, tok.obj_attrs.get(tok.obj_attrs.size() - 1).value)
			);
		}
		if (type == "sysfunc") {
			SystemFunction method = (SystemFunction) func;
			SystemFunction.pos_call = tok.pos;
			SystemFunction._inter = this;
			Object r = method.call(params.toArray());
			return r;
		}
		if (type == "func") {
			Function function = (Function) func;
			this.traceback.register(tok.pos);
			function._inter = this;
			return function.call(new ArrayList<Object>(List.of(params.toArray())), this.global);
		}
		return new None();
	}
	
	public Object callMethod(Token tok, ArrayList<Object> params) {
		Object func = this.refresh(tok);
		if (func instanceof Error) {
			return func;
		}
		Token anotherTok = tok.copy();
		anotherTok.obj_attrs.remove(anotherTok.obj_attrs.size() - 1);
		Object res = this.refresh(anotherTok);
		if (res instanceof Error) {
			return res;
		}
		Object parent = this.loadParentAttr(res, tok.obj_attrs);
		if (parent instanceof Error) {
			return parent;
		}
		if (parent instanceof PrlxObject) {
			ArrayList<Object> params_ = new ArrayList<Object>();
			params_.add(((PrlxObject) parent).mainClass);
			for (Object obj : params) {
				params_.add(obj);
			}
			params = params_;
		}
		String type = this.getType(func);
		if (type != "func" && type != "sysfunc") {
			return new Error(
				tok.obj_attrs.get(tok.obj_attrs.size() - 1).pos,
				String.format("cannot call %s near %s", type, tok.obj_attrs.get(tok.obj_attrs.size() - 1).value)
			);
		}
		if (type == "sysfunc") {
			SystemFunction method = (SystemFunction) func;
			SystemFunction.pos_call = tok.pos;
			SystemFunction._inter = this;
			return method.call(params.toArray());
		}
		if (type == "func") {
			Function function = (Function) func;
			this.traceback.register(tok.pos);
			function._inter = this;
			return function.call(new ArrayList<Object>(List.of(params.toArray())), this.global);
		}
		return new None();
	}

	public Object getAttr(Object obj, String attr) {
		Object res = null;
		if (obj instanceof PrlxClass) {
			res = ((PrlxClass) obj).attrs.get(attr);
		} else if (obj instanceof PrlxObject) {
			res = ((PrlxObject) obj).mainClass.attrs.get(attr);
		}
		if (res == null) {
			return new None();
		}
		Object re = this.refresh(res);
		if (re instanceof Error) {
			return re;
		}
		return re;
	}

	public Object loadAttrs(Object currentObj, ArrayList<Token> attrs) {
		for (Token attr : attrs) {
			currentObj = this.getAttr(currentObj, (String) attr.value);
		}
		return currentObj;
	}

	@SuppressWarnings("unchecked")
	public Object loadParentAttr(Object currentObj, ArrayList<Token> _attrs) {
		ArrayList<Token> attrs = (ArrayList<Token>) _attrs.clone();
		attrs.remove(attrs.size() - 1);
		for (Token attr : attrs) {
			currentObj = this.getAttr(currentObj, (String) attr.value);
		}
		return currentObj;
	}
}

class ProlixSystem implements Serializable {
	static String HOME = System.getProperty("user.dir");
	static long START_TIME = 0;

	static String VERSION = "Prolix 2.2.0-b.3";
}

public class Main implements Serializable {
	@SuppressWarnings("unchecked")
	public static void run(String src, String text, Table global) {
		Lexer lexer = new Lexer(src, text);
		Object tokens = lexer.start();
		if (tokens instanceof Error) {
			System.out.println(((Error) tokens).as_string());
			return;
		}

		Parser parser = new Parser((ArrayList<Token>) tokens);
		Object tasks = parser.start();
		if (tasks instanceof Error) {
			System.out.println(((Error) tasks).as_string());
			return;
		}

		Interpreter interpreter = new Interpreter((ArrayList<Task>) tasks);
		interpreter.global = global;
		Object res = interpreter.start();
		if (res instanceof Error) {
			System.out.println(((Error) res).as_string());
			if (interpreter.traceback.stacks.size() > 0) {
				System.out.println(interpreter.traceback.as_string());
			}
			return;
		}
	}

	@SuppressWarnings("unchecked")
	public static void main(String[] args) {
		// Setups
		Table GLOBAL = new Table();

		GLOBAL.set("print", new SystemFunction("print"));
		GLOBAL.set("input", new SystemFunction("input"));
		GLOBAL.set("add", new SystemFunction("add"));
		GLOBAL.set("sub", new SystemFunction("sub"));
		GLOBAL.set("mul", new SystemFunction("mul"));
		GLOBAL.set("div", new SystemFunction("div"));
		GLOBAL.set("eq", new SystemFunction("eq"));
		GLOBAL.set("ne", new SystemFunction("ne"));
		GLOBAL.set("gt", new SystemFunction("gt"));
		GLOBAL.set("lt", new SystemFunction("lt"));
		GLOBAL.set("ge", new SystemFunction("ge"));
		GLOBAL.set("le", new SystemFunction("le"));
		GLOBAL.set("not", new SystemFunction("not"));
		GLOBAL.set("and", new SystemFunction("and"));
		GLOBAL.set("or", new SystemFunction("or"));
		GLOBAL.set("xor", new SystemFunction("xor"));
		GLOBAL.set("len", new SystemFunction("len"));
		GLOBAL.set("type", new SystemFunction("type"));
		GLOBAL.set("tick", new SystemFunction("tick"));
		GLOBAL.set("tostr", new SystemFunction("tostr"));
		GLOBAL.set("tonum", new SystemFunction("tonum"));
		GLOBAL.set("exec", new SystemFunction("exec"));
		GLOBAL.set("error", new SystemFunction("error"));
		
		GLOBAL.set("global", GLOBAL);

		// Command-line
		if (args.length > 0) {
			String command = args[0];
			if (command.equals("run")) {
				if (args.length < 2) {
					System.out.println("missing arguments");
					return;
				}
				File file = new File(args[1]);
				FileInputStream inputStream;
				byte bytes[];
				try {
					inputStream = new FileInputStream((String) args[1]);
					bytes = inputStream.readAllBytes();
					inputStream.close();
				} catch (FileNotFoundException e) {
					System.out.println(String.format("file '%s' not found", args[1]));
					return;
				} catch (IOException e) {
					System.out.println("unreadable file");
					return;
				}
				Object obj;
				try {
					ByteArrayInputStream bis = new ByteArrayInputStream(bytes);
					ObjectInputStream ois = new ObjectInputStream(bis);
					obj = ois.readObject();
				} catch (Exception e) {
					obj = null;
				}
				if (obj instanceof Task[] tasks) {
					Interpreter interpreter = new Interpreter(new ArrayList<Task>(List.of((Task[]) tasks)));
					interpreter.global = GLOBAL;
					interpreter.start();
					return;
				}
				String text;
				text = new String(bytes);
				System.setProperty("user.dir", Paths.get(file.getAbsolutePath()).getParent().toString());
				ProlixSystem.START_TIME = System.nanoTime();
				run(
					new File(
						System.getProperty("user.dir")
					).toURI().relativize(file.toURI()).getPath(),
					text,
					GLOBAL
				);
			} else if (command.equals("compile")) {
				double start = System.currentTimeMillis();
				if (args.length < 2) {
					System.out.println("missing arguments");
					return;
				}
				File file = new File(args[1]);
				Scanner reader;
				try {
					reader = new Scanner(file);
				} catch (FileNotFoundException e) {
					System.out.println(String.format("file '%s' not found", args[1]));
					return;
				}
				String text = "";
				while (reader.hasNextLine()) {
					text += reader.nextLine();
					if (reader.hasNextLine()) {
						text += "\n";
					}
				}
				reader.close();
				System.setProperty("user.dir", Paths.get(file.getAbsolutePath()).getParent().toString());
				Lexer lexer = new Lexer(new File(
					System.getProperty("user.dir")
				).toURI().relativize(file.toURI()).getPath(), text);
				Object tokens = lexer.start();
				if (tokens instanceof Error) {
					System.out.println(((Error) tokens).as_string());
					return;
				}

				Parser parser = new Parser((ArrayList<Token>) tokens);
				Object tasks = parser.start();
				if (tasks instanceof Error) {
					System.out.println(((Error) tasks).as_string());
					return;
				}
				
				Interpreter interpreter = new Interpreter((ArrayList<Task>) tasks);
				interpreter.global = GLOBAL;

				ByteArrayOutputStream bos = new ByteArrayOutputStream();
				try {
					ObjectOutputStream oos = new ObjectOutputStream(bos);
					Object o[] = ((ArrayList<Task>) tasks).toArray();
					Task res[] = new Task[o.length];
					res = ((ArrayList<Task>) tasks).toArray(res);
					oos.writeObject(res);
				} catch (IOException e) {
					e.printStackTrace();
					System.out.println("compile failed");
					return;
				}

				byte res[] = bos.toByteArray();
				try (FileOutputStream outputStream = new FileOutputStream(file.getName().substring(0, file.getName().lastIndexOf(".")) + ".prts")) {
					outputStream.write(res);
				} catch (IOException e) {
					System.out.println("compile failed");
					return;
				}

				System.out.println("compile took " + (System.currentTimeMillis() - start) / 1000d + "s");
			} else if (command.equals("execute")) {
				if (args.length < 2) {
					System.out.println("Missing arguments");
					return;
				}

				Main.run("str", args[1], GLOBAL);
				return;
			} else if (command.equals("version")) {
				System.out.println(ProlixSystem.VERSION);
				return;
			} else {
				System.out.println("no such command " + command);
			}
			return;
		}

		System.out.println("Prolix 2.2.0 (C) 2023-2024 _morlus");
		while (true) {
			@SuppressWarnings("resource")
			Scanner scanner = new Scanner(System.in);
			System.out.print("> ");
			String input = scanner.nextLine();

			run("stdin", input, GLOBAL);
		}
	}
}

