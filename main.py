import subprocess
import functools
import datetime
import readchar
import decimal
import ctypes
import random
import typing
import copy
import math
import time
import sys
import gc
import os

class ProgramCrashed(Exception):
	pass

class BreakStatement(Exception):
	pass

class SkipStatement(Exception):
	pass

class ExitStatement(Exception):
	pass

class FatalSystemError(Exception):
	pass

class ProgramCrashedInstantly(Exception):
	def __init__(self, message=None):
		self.message = message
		super().__init__(self.message)

class Token:
	def __init__(self, type, value, ln, src):
		self.type = type
		self.value = value
		self.ln = ln
		self.src = src
	
	def istype(self, type):
		return self.type == type
	
	def isend(self):
		return self.type in [self.NEWLINE, self.SEMICOLON, self.EOF, self.EOE]
	
	def isbtypes(self):
		return self.type in [self.STR, self.NUM, self.NONE, self.TABLE]
	
	def copy(self):
		return Token(self.type, self.value, self.ln, self.src)
	
	def __repr__(self):
		return f'{self.type}:{self.value}'
	
	# Data Types
	STR = 'type \'str\''
	NONE = 'type \'none\''
	NUM = 'type \'num\''
	TABLE = 'type \'table\''
	TYPES = [STR, NONE, NUM, TABLE]
	for i, v in enumerate(TYPES):
		TYPES[i] = TYPES[i][6:-1]
	
	# Keywords
	IF = 'keyword if'
	LOOP = 'keyword loop'
	BREAK = 'keyword break'
	SKIP = 'keyword skip'
	REQUIRE = 'keyword require'
	CLASS = 'keyword class'
	EXIT = 'keyword exit'
	KEYWORDS = [IF, LOOP, BREAK, REQUIRE, CLASS, SKIP]
	for i, v in enumerate(KEYWORDS):
		KEYWORDS[i] = KEYWORDS[i][8:]
	
	# Symbols
	COLON = 'colon'
	NEWLINE = 'newline'
	SEMICOLON = 'semicolon'
	LCURLY = 'leftbrace'
	RCURLY = 'rightbrace'
	
	# Others
	OBJ = 'object/identifier'
	USER_OBJ = 'userobject'
	EOF = 'eof'
	EOE = 'eoe'

class Error:
	def __init__(self, details, ln, src):
		self.details = details
		self.ln = ln
		self.src = src
	
	def as_string(self):
		result = self.src
		result += f':{self.ln}: '
		result += self.details
		return result
	
class Lexer:
	def __init__(self, text, src):
		self.idx = -1
		self.ln = 1
		self.src = src
		self.text = text
		self.char = None
		self.next()
	
	def next(self):
		self.idx += 1
		if self.idx >= len(self.text):
			self.char = None
		else:
			self.char = self.text[self.idx]
		if self.char == '\n':
			self.ln += 1
	
	def tok(self, type='', value=None):
		return Token(type, value, self.ln, self.src)
	
	def start(self):
		tokens = []
		
		while self.char != None:
			if self.char == ':':
				tokens.append(self.tok(Token.COLON, self.char))
			elif self.char == ';':
				tokens.append(self.tok(Token.SEMICOLON, self.char))
			elif self.char == '{':
				tokens.append(self.tok(Token.LCURLY, self.char))
			elif self.char == '}':
				tokens.append(self.tok(Token.RCURLY, self.char))
			elif self.char in ['"', "'"]:
				result, error = self.make_str()
				if error:
					return [], error
				tokens.append(result)
			elif self.char.isdigit() or self.char == '.':
				result = self.make_num()
				if isinstance(result, Error):
					return None, result
				tokens.append(result)
				continue
			elif self.char.isidentifier():
				tokens.append(self.make_id())
				continue
			elif self.char == '$':
				result, error = self.make_usr_obj()
				if error:
					return [], error
				tokens.append(result)
				continue
			elif self.char == '#':
				while self.char not in [None, '\n']:
					self.next()
			elif self.char == '-':
				self.next()
				while self.char in [' ', '\n', '\t']:
					self.next()
				if self.char == None:
					return None, Error(
						f"eof reached", self.ln, self.src
					)
				if not (self.char.isdigit() or self.char == '.'):
					return None, Error(
						f"invalid syntax after '-'", self.ln, self.src
					)
				result = self.make_num()
				if isinstance(result, Error):
					return None, result
				result.value = -result.value
				tokens.append(result)
				continue
			elif self.char in ' \t\n': pass
			else:
				return None, Error(
					f"invalid character '{self.char}'", self.ln, self.src
				)
			self.next()
		tokens.append(self.tok(Token.EOF, ''))
		return tokens, None
	
	def make_str(self):
		delimiter = self.char
		start_ln = self.ln
		result = ''
		self.next()
		skip = False
		
		while self.char not in [None, delimiter]:
			result += self.char
			self.next()
			if self.char == '\\':
				skip = True
			elif self.char == delimiter:
				if skip:
					skip = False
					result += self.char
					self.next()
			else:
				skip = False
			
		if self.char == None:
			return None, Error(
				"incomplete string", start_ln, self.src
			)
		
		escape_chars = {
			'\\n': '\n',
			'\\\\': '\\',
			'\\t': '\t',
			'\\0': '\0',
			'\\a': '\x1b',
		}
		for char in escape_chars:
			result = result.replace(char, escape_chars[char])
		
		return Token(Token.STR, result, start_ln, self.src), None
	
	def make_num(self):
		result = self.char
		start_ln = self.ln
		self.next()
		
		while self.char != None:
			if self.char in list('0123456789') or self.char == '.':
				pass
			elif self.char == 'x':
				if result == '0':
					pass
				else: break
			elif self.char == 'b':
				if result == '0':
					pass
				else: break
			else:
				break
			if self.char == '.':
				if result.count('.'):
					break
				if result.count('x'):
					break
			result += self.char
			self.next()
		if result == '.':
			result = 0.0
		elif result[0:2] in ['0x', '0b']:
			try:
				result = eval(result)
			except SyntaxError as log:
				return Error(
					str(log), start_ln, self.src
				)
		elif result.count('.'):
			result = float(result)
		else:
			result = int(result)
		
		return Token(Token.NUM, result, start_ln, self.src)
	
	def make_id(self):
		result = self.char
		start_ln = self.ln
		self.next()
		
		while self.char != None:
			result += self.char
			if not result.isidentifier():
				result = result[:-1]
				break
			self.next()
		if result in Token.KEYWORDS:
			type = getattr(Token, result.upper())
		elif result == 'none':
			type = Token.NONE
			result = None
		else:
			type = Token.OBJ
		
		return Token(type, result, start_ln, self.src)
	
	def make_usr_obj(self):
		start_ln = self.ln
		self.next()
		while self.char in [' ', '\n', '\t']:
			self.next()
		if self.char == None:
			return None, Error(
				"invalid syntax near '$'", start_ln, self.src
			)
		elif not self.char.isidentifier():
			return None, Error(
				"invalid syntax near '$'", start_ln, self.src
			)
		result = self.make_id()
		result.type = Token.USER_OBJ
		return result, None

class Object:
	def __init__(self):
		self.name = ''
		self.attrs = {}
		self.main = None
	
	def new(self, name, main):
		result = copy.deepcopy(self)
		result.name = name
		result.main = main
		result.__index()
		return result
	
	def get(self, key):
		return self.attrs.get(key, None)
	
	def set(self, key, value):
		self.attrs[key] = value
		if not self.main: return
		self.attrs['__key__'] = key
		self.__edit()
	
	def __edit(self):
		if self.get('__edit__') == None:
			return
		invoke = self.get('__edit__')
		if not isinstance(invoke, Custom):
			return
		if invoke.name != 'group':
			return
		func = invoke.values[0]
		if not callable(func):
			return
		if len(invoke.values) == 1:
			func(self)
		else:
			func(self, invoke.values[1])
	
	def __index(self):
		if self.get('__index__') == None:
			return
		invoke = self.get('__index__')
		if not isinstance(invoke, Custom):
			return
		if invoke.name != 'group':
			return
		func = invoke.values[0]
		if not callable(func):
			return
		if len(invoke.values) == 1:
			func(self)
		else:
			func(self, invoke.values[1])

class Table:
	def __init__(self, obj):
		if isinstance(obj, list):
			res = {}
			for i, v in enumerate(obj):
				res[i] = v
			self.obj = res
		self.id = hex(random.randint(1048576, 16777215))
	
	def __repr__(self):
		return 'table: ' + self.id

class Custom:
	def __init__(self, name, *values):
		self.name = name
		self.values = list(values)
		self.id = hex(random.randint(1048576, 16777215))
	
	def __repr__(self):
		return self.name + ': ' + self.id

class Library:
	# io library
	io = Object()
	def io_edit(self):
		key = self.get('__key__')
		value = self.get(key)
		if key == 'write':
			filename = self.get('__cwf__')
			if value == None:
				value = 'none'
			if filename and isinstance(filename, Custom):
				if filename.name != 'file':
					self.main.report(f'cannot edit data of \'{filename.name}\'')
				file = self.get('__cwf__').values[0]
				open(file, 'w').write(str(value))
			else:
				print(value, end='')
				sys.stdout.flush()
		elif key == 'append':
			filename = self.get('__cwf__')
			if value == None:
				value = 'none'
			if filename and isinstance(filename, Custom):
				if filename.name != 'file':
					self.main.report(f'cannot edit data of \'{filename.name}\'')
				file = self.get('__cwf__').values[0]
				open(file, 'a').write(str(value))
			else:
				print(value, end='')
				sys.stdout.flush()
		elif key == 'read':
			filename = self.get('__cwf__')
			if filename and isinstance(filename, Custom):
				if filename.name == 'file':
					file = filename.values[0]
					self.set('result', open(file, 'r').read())
				elif filename.name == 'userdata':
					try:
						self.set('result', subprocess.check_output([filename.values[0]]).decode())
					except FileNotFoundError:
						self.main.report('the system cannot find the file specified')
				else:
					self.main.report(f'cannot read data of \'{filename.name}\'')
			else:
				if isinstance(value, Table):
					values = list(value.data.values())
				else:
					values = [value]
				res = []
				for value in values:
					if value == '%l':
						res.append(input())
					elif value == '%n':
						try:
							r = eval(input())
						except:
							r = None
						if not isinstance(r, (int, float)):
							r = None
						res.append(r)
					elif value == '%a':
						r = ''
						while True:
							try:
								r += input('')
							except KeyboardInterrupt:
								break
							r += '\n'
						res.append(r[:-1])
					elif value == '%c':
						try:
							res.append(readchar.readkey())
						except:
							raise FatalSystemError
					elif isinstance(value, int):
						if value <= 0:
							res.append('')
						else:
							r = input()
							if r != '':
								r = r[0:value]
							res.append(r)
					else: res.append('')
				if len(res) > 1:
					self.attrs['result'] = Table(res)
				else:
					self.attrs['result'] = res[0]
		elif key == 'open':
			if self.get('__cwf__') != None:
				self.main.report('current working file is not closed yet', self.name)
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			if not os.path.isfile(value):
				open(value, 'w').write('')
			self.attrs['__cwf__'] = Custom('file', os.path.abspath(value))
		elif key == 'popen':
			if self.get('__cwf__') != None:
				self.main.report('current working file is not closed yet', self.name)
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			self.attrs['__cwf__'] = Custom('userdata', value)
		elif key == 'close':
			if self.get('__cwf__') == None:
				self.main.report('no current working file', self.name)
			del self.attrs['__cwf__']
	io.attrs['__edit__'] = Custom('group', io_edit)
	del io_edit

	# math Library
	math = Object()
	def _math_edit(self):
		key = self.get('__key__')
		value = self.get(key)
		commands = [
			'eq',
			'ne',
			'gt',
			'ge',
			'lt',
			'le',

			'add',
			'sub',
			'mul',
			'div',
			'pow',
			'mod',
			'random',

			'ceil',
			'abs',
			'factorial',
			'floor',
			'frexp',
			'acos',
			'asin',
			'atan',
			'cos',
			'cosh',
			'deg',
			'exp',
			'log',
			'neg',
			'round',
			'log10',
			'rad',
			'randomseed',
			'sin',
			'sinh',
			'tan',
			'tanh',
			'sqrt',
			'not',
			'modf',
			'fmod'
		]

		if not isinstance(value, Table):
			args = [value]
		else:
			args = list(value.obj.values())

		if key == 'eq':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			self.set('result', args[0] == args[1])
			return
		elif key == 'ne':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			self.set('result', args[0] != args[1])
			return
		elif key == 'gt':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			if args[0] == None:
				type1 = 'none'
			elif isinstance(args[0], Custom):
				type1 = args[0].name
			elif isinstance(args[0], (int, float)):
				type1 = 'num'
			elif isinstance(args[0], str):
				type1 = 'str'
			if args[1] == None:
				type2 = 'none'
			elif isinstance(args[1], Custom):
				type2 = args[0].name
			elif isinstance(args[1], (int, float)):
				type2 = 'num'
			elif isinstance(args[1], str):
				type2 = 'str'
			if type1 not in ['str', 'num'] or type2 not in ['str', 'num']:
				self.main.report(f'cannot compare \'{type1}\' with \'{type2}\'', self.name)
			self.set('result', args[0] > args[1])
			return
		elif key == 'ge':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			if args[0] == None:
				type1 = 'none'
			elif isinstance(args[0], Custom):
				type1 = args[0].name
			elif isinstance(args[0], (int, float)):
				type1 = 'num'
			elif isinstance(args[0], str):
				type1 = 'str'
			if args[1] == None:
				type2 = 'none'
			elif isinstance(args[1], Custom):
				type2 = args[0].name
			elif isinstance(args[1], (int, float)):
				type2 = 'num'
			elif isinstance(args[1], str):
				type2 = 'str'
			if type1 not in ['str', 'num'] or type2 not in ['str', 'num']:
				self.main.report(f'cannot compare \'{type1}\' with \'{type2}\'', self.name)
			self.set('result', args[0] >= args[1])
			return
		elif key == 'lt':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			if args[0] == None:
				type1 = 'none'
			elif isinstance(args[0], Custom):
				type1 = args[0].name
			elif isinstance(args[0], (int, float)):
				type1 = 'num'
			elif isinstance(args[0], str):
				type1 = 'str'
			if args[1] == None:
				type2 = 'none'
			elif isinstance(args[1], Custom):
				type2 = args[0].name
			elif isinstance(args[1], (int, float)):
				type2 = 'num'
			elif isinstance(args[1], str):
				type2 = 'str'
			if type1 not in ['str', 'num'] or type2 not in ['str', 'num']:
				self.main.report(f'cannot compare \'{type1}\' with \'{type2}\'', self.name)
			self.set('result', args[0] < args[1])
			return
		elif key == 'le':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			if args[0] == None:
				type1 = 'none'
			elif isinstance(args[0], Custom):
				type1 = args[0].name
			elif isinstance(args[0], (int, float)):
				type1 = 'num'
			elif isinstance(args[0], str):
				type1 = 'str'
			if args[1] == None:
				type2 = 'none'
			elif isinstance(args[1], Custom):
				type2 = args[0].name
			elif isinstance(args[1], (int, float)):
				type2 = 'num'
			elif isinstance(args[1], str):
				type2 = 'str'
			if type1 not in ['str', 'num'] or type2 not in ['str', 'num']:
				self.main.report(f'cannot compare \'{type1}\' with \'{type2}\'', self.name)
			self.set('result', args[0] <= args[1])
			return

		for i, arg in enumerate(args):
			if not isinstance(arg, (int, float)):
				self.main.report(f'bad argument #{i+1} (require num)', self.name)
		
		# 2 arguments functions
		if key == 'add':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			self.set('result', better_eval(args[0], '+', args[1]))
		elif key == 'sub':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			self.set('result', better_eval(args[0], '-', args[1]))
		elif key == 'mul':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			self.set('result', better_eval(args[0], '*', args[1]))
		elif key == 'div':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			self.set('result', better_eval(args[0], '/', args[1]))
		elif key == 'mod':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			self.set('result', better_eval(args[0], '%', args[1]))
		elif key == 'pow':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			self.set('result', better_eval(args[0], '**', args[1]))
		elif key == 'random':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			self.set('result', random.randint(args[0], args[1]))
		
		# 1 argument functions
		elif key == 'ceil':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.ceil(args[0]))
		elif key == 'abs':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', abs(args[0]))
		elif key == 'factorial':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.factorial(args[0]))
		elif key == 'floor':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.floor(args[0]))
		elif key == 'frexp':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.frexp(args[0]))
		elif key == 'acos':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.acos(args[0]))
		elif key == 'asin':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.asin(args[0]))
		elif key == 'atan':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.atan(args[0]))
		elif key == 'cos':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.cos(args[0]))
		elif key == 'cosh':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.cosh(args[0]))
		elif key == 'deg':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.deg(args[0]))
		elif key == 'exp':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.exp(args[0]))
		elif key == 'log':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.log(args[0]))
		elif key == 'neg':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', -args[0])
		elif key == 'round':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', round(args[0]))
		elif key == 'log10':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.log10(args[0]))
		elif key == 'rad':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.radians(args[0]))
		elif key == 'randomseed':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', random.seed(args[0]))
		elif key == 'sin':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.sin(args[0]))
		elif key == 'sinh':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.sinh(args[0]))
		elif key == 'tan':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.tan(args[0]))
		elif key == 'tanh':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.tanh(args[0]))
		elif key == 'sqrt':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.sqrt(args[0]))
		elif key == 'not':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', not args[0])
		elif key == 'modf':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', Table(list(math.modf(args[0]))))
		elif key == 'fmod':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			self.set('result', math.fmod(args[0], args[1]))
		
		if isinstance(self.get('result'), bool):
			self.set('result', int(self.get('result')))
	def math_edit(self, _math_edit=_math_edit):
		try:
			_math_edit(self)
		except ValueError:
			self.main.report('math domain error')
		except ZeroDivisionError:
			self.main.report('zero division error')
		except decimal.Overflow:
			self.main.report('math overflow')
		except OverflowError:
			self.main.report('math overflow')
	math.attrs['__edit__'] = Custom('group', math_edit)
	math.attrs['pi'] = sys.modules['math'].pi
	math.attrs['e'] = sys.modules['math'].e
	math.attrs['huge'] = sys.maxsize
	del math_edit, _math_edit

	# garbagecollect Module
	garbagecollect = Object()
	def garbagecollect_edit(self):
		key = self.get('__key__')
		value = self.get(key)
		value = refreshTable(value)

		if key == 'enabled':
			if value:
				gc.enable()
			else:
				gc.disable()
		elif key == 'paused':
			if value:
				gc.freeze()
			else:
				gc.unfreeze()
		elif key == 'count':
			self.set('result', Table(list(gc.get_count())))
		elif key == 'pausecount':
			self.set('result', Table(list(gc.get_freeze_count())))
		elif key == 'collect':
			self.set('result', gc.collect())
		elif key == 'istracked':
			self.set('result', gc.is_tracked(value))
	garbagecollect.attrs['__edit__'] = Custom('group', garbagecollect_edit)
	del garbagecollect_edit

	# utils Module
	utils = Object()
	def utils_edit(self):
		key = self.get('__key__')
		value = self.get(key)
		value = refreshTable(value)

		if key == 'exec':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			_, error = run(value, 'string', SYSTEM_TABLE)
			if error:
				self.main.error(f"exec error\n* {error}", self.name)
		elif key == 'tostr':
			self.set('result', str(value))
		elif key == 'tonum':
			if isinstance(value, Table):
				self.set('result', None)
			elif isinstance(value, str):
				if value.count('.'):
					try:
						self.set('result', float(value))
					except:
						self.set('result', None)
				else:
					try:
						self.set('result', int(value))
					except:
						self.set('result', None)
		elif key == 'type':
			if isinstance(value, (int, float)):
				self.set('result', 'num')
			elif isinstance(value, str):
				self.set('result', 'str')
			elif isinstance(value, Table):
				self.set('result', 'table')
			elif isinstance(value, Custom):
				self.set('result', value.name)
			elif value == None:
				self.set('result', 'none')
		elif key == 'assert':
			if not isinstance(value, Table):
				if not value:
					self.main.report('assertion failed', self.name)
			else:
				if len(value.obj.values()) != 2:
					self.main.report('argument error', self.name)
				if not value.obj[0]:
					self.main.report(str(value.obj[1]), self.name)
		elif key == 'error':
			self.main.report(str(value), self.name)
		elif key == 'do':
			if not isinstance(value, Custom):
				self.main.report('bad argument (required group)', self.name)
			if value.name != 'group':
				self.main.report('bad argument (required group)', self.name)
			success, error = 1, None
			try:
				name = self.name
				parser = Parser(value.values)
				tokens, error = parser.start()
				if error:
					self.main.report(f'an error occurred in {name}\n* {error.as_string()}', self.name)
				
				interpreter = Interpreter(tokens, SYSTEM_TABLE)
				error = interpreter.start()
				if error:
					self.main.report(f'an error occurred in {name}\n* {error}', self.name)
			except ProgramCrashed:
				success, error = 0, self.report_msg
			self.set('result', Table([success, error]))
		elif key == 'length':
			if isinstance(value, Table):
				self.set('result', len(value.obj.values()))
			elif isinstance(value, str):
				self.set('result', len(value))
			elif isinstance(value, (int, float)):
				self.main.report(f'type \'num\' has no length', self.name)
		elif key == 'tick':
			self.set('result', time.time() - START_TIME)
		elif key == 'spawn':
			if not isinstance(value, Custom):
				self.main.report('bad argument (required group)', self.name)
			if value.name != 'group':
				self.main.report('bad argument (required group)', self.name)
			success, error = 1, None
			try:
				name = self.name
				parser = Parser(value.values)
				tokens, error = parser.start()
				if error:
					self.main.report(f'an error occurred in {name}\n* {error.as_string()}', self.name)
				
				interpreter = Interpreter(tokens, SYSTEM_TABLE)
				SPAWNS.append([interpreter, name, self])
			except ProgramCrashed:
				success, error = 0, self.report_msg
			self.set('result', Table([success, error]))
	utils.attrs['__edit__'] = Custom('group', utils_edit)
	del utils_edit

	# table Module
	table = Object()
	def table_edit(self):
		key = self.get('__key__')
		value = self.get(key)
		value = refreshTable(value)

		if key not in [
			'create',
			'set',
			'remove',
			'foreach',
			'get',
			'push',
			'clear',
			'combine',
			'find',
		]: return

		if key == 'create':
			if value == None:
				res = Table([])
			elif not isinstance(value, Table):
				res = Table([value])
			elif value.type == 'user':
				res = value
			self.set('result', res)
			return
		
		if not isinstance(value, Table):
			self.main.report('arguments error', self.name)
		
		t = value.obj.get(0)
		if not isinstance(t, Table):
			self.main.report('bad argument #1 (required table)', self.name)
		args = list(value.obj.values())[1:]

		if key == 'set':
			if len(args) != 2:
				self.main.report('argument error', self.name)
			if not isinstance(args[0], typing.Hashable):
				self.main.report(f'unhashable type', self.name)
			t.obj[args[0]] = args[1]
		elif key == 'remove':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			if not isinstance(args[0], typing.Hashable):
				self.main.report(f'unhashable type', self.name)
			if t.obj.get(args[0], None):
				del t.obj[args[0]]
		elif key == 'get':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			if not isinstance(args[0], typing.Hashable):
				self.main.report(f'unhashable type', self.name)
			self.set('result', t.obj.get(args[0], None))
		elif key == 'foreach':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			if not isinstance(args[0], Custom):
				self.main.report('bad argument #2 (required group)', self.name)
			if args[0].name != 'group':
				self.main.report('bad argument #2 (required group)', self.name)
			name = self.name
			for key in t.obj:
				value = t.obj[key]
				parser = Parser(copy.deepcopy(args[0].values))
				tokens, error = parser.start()
				if error:
					self.main.report(f'an error occurred in {name}\n* {error.as_string()}', self.name)
				self.set('key', key)
				self.set('value', value)
				interpreter = Interpreter(tokens, SYSTEM_TABLE)
				error = interpreter.start()
				if error:
					self.main.report(f'an error occurred in {name}\n* {error}', self.name)
		elif key == 'push':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			t.obj[len(t.obj.values())] = args[0]
		elif key == 'clear':
			t.obj.clear()
		elif key == 'combine':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			if not isinstance(args[0], Table):
				self.main.report('bad argument #2 (required table)', self.name)
			for k in args[0].obj:
				v = args[0].obj[k]
				t.obj[k] = v
		elif key == 'find':
			if len(args) != 1:
				self.main.report('argument error', self.name)
			for k in t.obj:
				v = t.obj[k]
				if v == args[0]:
					self.set('result', k)
					break
	table.attrs['__edit__'] = Custom('group', table_edit)
	del table_edit

	# string Module
	string = Object()
	def string_edit(self):
		key = self.get('__key__')
		value = self.get(key)
		value = refreshTable(value)

		if key == 'concat':
			if not isinstance(value, Table):
				value = Table([value])
			values = list(value.obj.values())
			res = []
			for val in values:
				res.append(str(val))
			self.set('result', ''.join(res))
		elif key == 'upper':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			self.set('result', value.upper())
		elif key == 'lower':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			self.set('result', value.lower())
		elif key == 'reverse':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			self.set('result', value[::-1])
		elif key == 'char':
			if not isinstance(value, Table):
				self.main.report('argument error', self.name)
			args = list(value.obj.values())
			if len(args) != 2:
				self.main.report('argument error', self.name)
			if not isinstance(args[0], str):
				self.main.report('bad argument #1 (required str)', self.name)
			if not isinstance(args[1], (int, float)):
				self.main.report('bad argument #2 (required num)', self.name)
			if not isinstance(args[1], int):
				self.main.report('bad argument #2 (required integer)', self.name)
			if args[1] < 0 or args[1] >= len(args[0]):
				self.set('result', None)
			else: self.set('result', args[0][args[1]])
		elif key == 'repeat':
			if not isinstance(value, Table):
				self.main.report('argument error', self.name)
			args = list(value.obj.values())
			if len(args) != 2:
				self.main.report('argument error', self.name)
			if not isinstance(args[0], str):
				self.main.report('bad argument #1 (required str)', self.name)
			if not isinstance(args[1], (int, float)):
				self.main.report('bad argument #2 (required num)', self.name)
			if not isinstance(args[1], int):
				self.main.report('bad argument #2 (required integer)', self.name)
			if args[1] < 0:
				self.set('result', None)
			else: self.set('result', args[0]*args[1])
		elif key == 'replace':
			if not isinstance(value, Table):
				self.main.report('argument error', self.name)
			args = list(value.obj.values())
			if len(args) != 3:
				self.main.report('argument error', self.name)
			if not isinstance(args[0], str):
				self.main.report('bad argument #1 (required str)', self.name)
			if not isinstance(args[1], str):
				self.main.report('bad argument #2 (required str)', self.name)
			if not isinstance(args[2], str):
				self.main.report('bad argument #3 (required str)', self.name)
			self.set('result', args[0].replace(args[1], args[2]))
		elif key == 'split':
			if not isinstance(value, Table):
				self.main.report('argument error', self.name)
			args = list(value.obj.values())
			if len(args) != 2:
				self.main.report('argument error', self.name)
			if not isinstance(args[0], str):
				self.main.report('bad argument #1 (required str)', self.name)
			if not isinstance(args[1], str):
				self.main.report('bad argument #2 (required str)', self.name)
			if args[1] == '':
				self.set('result', list(args[0]))
			else: self.set('result', args[0].split(args[1]))
		elif key == 'find':
			if not isinstance(value, Table):
				self.main.report('argument error', self.name)
			args = list(value.obj.values())
			if len(args) != 2:
				self.main.report('argument error', self.name)
			if not isinstance(args[0], str):
				self.main.report('bad argument #1 (required str)', self.name)
			if not isinstance(args[1], str):
				self.main.report('bad argument #2 (required str)', self.name)
			if args[1] == '':
				self.set('result', list(args[0]))
			else: self.set('result', args[0].find(args[1]))
		elif key == 'sub':
			if not isinstance(value, Table):
				self.main.report('argument error', self.name)
			args = list(value.obj.values())
			if len(args) != 3:
				self.main.report('argument error', self.name)
			if not isinstance(args[0], str):
				self.main.report('bad argument #1 (required str)', self.name)
			if not isinstance(args[1], (int, float)):
				self.main.report('bad argument #2 (required num)', self.name)
			if not isinstance(args[1], int):
				self.main.report('bad argument #2 (required integer)', self.name)
			if not isinstance(args[2], (int, float)):
				self.main.report('bad argument #3 (required num)', self.name)
			if not isinstance(args[2], int):
				self.main.report('bad argument #3 (required integer)', self.name)
			self.set('result', args[0][args[1]:args[2]])
		elif key == 'format':
			if not isinstance(value, Table):
				value = Table([value])
			values = list(value.obj.values())
			if not isinstance(values[0], str):
				self.main.report('bad argument #1 (required str)', self.name)
			res = []
			for val in values:
				res.append(str(val))
			t = res.pop(0)
			result = ''
			skip = False
			for char in t:
				if char == '%':
					if skip:
						result += char
						skip = False
						continue
					if len(res):
						result += res.pop(0)
				if char == '\\':
					skip = True
				result += char
			self.set('result', result)
		elif key == 'unicode':
			if not isinstance(value, (int, float)):
				self.main.report('bad argument (required num)', self.name)
			if not isinstance(value, int):
				self.main.report('bad argument (required integer)', self.name)
			if value > 65535 or value < 0:
				self.main.report(f'invalid unicode \'{value}\'', self.name)
			self.set('result', chr(value))
		elif key == 'ordinal':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			if len(value) != 1:
				self.main.report('bad argument (required 1 character)', self.name)
			self.set('result', ord(value))
	string.attrs['__edit__'] = Custom('group', string_edit)
	del string_edit

	# cdll Module
	cdll = Object()
	def cdll_edit(self):
		key = self.get('__key__')
		value = self.get(key)
		value = refreshTable(value)

		if key == 'open':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			if not os.path.isfile(value):
				self.main.report(f"no file named '{value}'")
			try:
				self.set('__source__', Custom('cdll', ctypes.CDLL(os.path.abspath(value))))
			except OSError:
				self.main.report('unexpected error during file reading or access denied', self.name)
		elif key == 'load':
			if not isinstance(value, Table):
				args = [value]
			else:
				args = list(value.obj.values())
			if not isinstance(args[0], str):
				self.main.report('bad argument #1 (required str)', self.name)
			if not self.get('__source__'):
				self.main.report('no current working cdll object', self.name)
			if not isinstance(self.get('__source__'), Custom):
				self.main.report('attribute \'__source__\' is not a cdll object', self.name)
			if self.get('__source__').name != 'cdll':
				self.main.report('attribute \'__source__\' is not a cdll object', self.name)
			if not hasattr(self.get('__source__').values[0], args[0]):
				self.main.report(f'no function \'{args[0]}\'', self.name)
			self.set('result', getattr(self.get('__source__').values[0], args[0])(*args[1:]))
	cdll.attrs['__edit__'] = Custom('group', cdll_edit)
	del cdll_edit

	# os Module
	os = Object()
	def os_edit(self):
		key = self.get('__key__')
		value = self.get(key)
		value = refreshTable(value)

		if key == 'date':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			replaces = {
				'%s': datetime.datetime.now().second,
				'%m': datetime.datetime.now().minute,
				'%h': datetime.datetime.now().hour,
				'%d': datetime.datetime.now().day,
				'%M': datetime.datetime.now().month,
				'%y': datetime.datetime.now().year,
			}
			res = value.replace('\\%', str(id(value)))
			for rep in replaces:
				res = res.replace(rep, str(replaces[rep]))
			res = res.replace(str(id(value)), '%')
			self.set('result', res)
		elif key == 'exec':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			os.system(value)
		elif key == 'exit':
			sys.exit(value)
		elif key == 'getenv':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			self.set('result', os.getenv(value))
		elif key == 'remove':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			if os.path.isfile(value):
				os.remove(value)
			elif os.path.isdir(value):
				os.rmdir(value)
		elif key == 'rename':
			if not isinstance(value, Table):
				self.main.report('arguments error', self.name)
			args = value.obj.values()
			if len(args) != 2:
				self.main.report('arguments error', self.name)
			if not isinstance(args[0], str):
				self.main.report('bad argument #1 (required str)', self.name)
			if not isinstance(args[1], str):
				self.main.report('bad argument #2 (required str)', self.name)
			if not os.path.exists(args[0]):
				self.main.report(f"no file or directory named '{args[0]}'", self.name)
			os.rename(args[0], args[1])
		elif key == 'chdir':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			if not os.path.isdir(value):
				self.main.report(f'no directory named \'{value}\'', self.name)
			os.chdir(value)
		elif key == 'getcwd':
			self.set("result", os.getcwd())
		elif key == 'exists':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			self.set("result", int(os.path.exists(value)))
		elif key == 'listdir':
			if not isinstance(value, str) and value != None:
				self.main.report('bad argument (required str)', self.name)
			if value == None: value = '.'
			self.set("result", Table(os.listdir(value)))
		elif key == 'mkdir':
			if not isinstance(value, str):
				self.main.report('bad argument (required str)', self.name)
			try:
				os.mkdir(value)
			except FileExistsError:
				self.main.report('directory already exists', self.name)
			except FileNotFoundError:
				self.main.report('parent directory in the provided path does not exist', self.name)
	os.attrs['__edit__'] = Custom('group', os_edit)
	os.attrs['name'] = globals()['os'].name
	del os_edit

class Task:
	def __init__(self, mission, args):
		self.mission = mission
		self.args = args
	
	def __repr__(self):
		return f'{self.mission}:{self.args}'
	
	def refresh(task, self, args):
		idx = -1
		for arg in args:
			idx += 1
			if isinstance(arg, Task):
				result = arg.do(self)
				args[idx] = result
			elif isinstance(arg, Token):
				if arg.istype(Token.NONE):
					args[idx] = None
				else:
					args[idx] = arg.value
			arg = args[idx]
			if isinstance(arg, list):
				arg = task.refresh(self, arg)
			args[idx] = arg
		return args
	
	def do(task, self):
		self.register(task.args[0])
		task.refresh(self, task.args)
		if task.mission == 'new':
			object = task.args[0]
			new_key = task.args[1]
			edits = task.args[2]
			if not hasattr(Library, object):
				self.report(f"no class named '{object}'")
			result = getattr(Library, object).new(new_key, self)
			for edit in edits:
				if isinstance(edit[1], list):
					edit[1] = Table(edit[1])
				result.set(edit[0], edit[1])
			self.set(new_key, result)
		elif task.mission == 'edit':
			user_object = task.args[0]
			edits = task.args[1]
			if self.get(user_object) == None:
				self.report(f"undefined object '{user_object}'")
			for edit in edits:
				key = edit[0]
				value = edit[1]
				if isinstance(value, list):
					value = Table(value)
				object = self.get(user_object)
				object.main = self
				try:
					object.set(key, value)
				except ProgramCrashed:
					raise ProgramCrashedInstantly(self.report_msg)
		elif task.mission == 'get':
			object = task.args[0]
			key = task.args[1]
			if self.get(object) == None:
				self.report(f"undefined object '{object}'")
			result = self.get(object).get(key)
			self.unregister()
			return result
		elif task.mission == 'if':
			self.unregister()
			condition = task.args[1]
			code = task.args[2]
			res = []
			for i in range(len(code.keys())):
				res.append(code[i])
			code = res
			if condition and len(code) > 0:
				code.append(Token(Token.EOE, '', code[-1].ln, code[-1].src))
				parser = Parser(code)
				tasks, error = parser.start()
				if error:
					self.report_(error.as_string())
				interpreter = Interpreter(tasks, self.user_objects)
				interpreter.traceback = self.traceback
				error = interpreter.start()
				if error:
					self.report_(error)
			return
		elif task.mission == 'loop':
			self.unregister()
			amount = task.args[1]
			code = task.args[2]
			res = []
			for i in range(len(code.keys())):
				res.append(code[i])
			code = res
			if isinstance(amount, float):
				amount = int(amount)
			elif isinstance(amount, str):
				amount = len(amount)
			elif isinstance(amount, Table):
				amount = len(amount.data.keys())
			elif amount == None:
				amount = 0
			if len(code) == 0:
				return
			code.append(Token(Token.EOE, '', code[-1].ln, code[-1].src))
			i = 0
			while i != amount:
				parser = Parser(copy.deepcopy(code))
				tasks, error = parser.start()
				if error:
					self.report_(error.as_string())
				interpreter = Interpreter(tasks, self.user_objects)
				interpreter.traceback = self.traceback
				try:
					error = interpreter.start()
				except SkipStatement: pass
				except BreakStatement: break
				if error:
					self.report_(error)
				i += 1
			return
		elif task.mission == 'require':
			requires = task.args[1]
			for require in requires:
				loaded = False
				og = os.getcwd()
				os.chdir(os.path.dirname(__file__))
				if os.path.isdir('__lib__'):
					os.chdir('__lib__')
					if not os.path.isfile(require):
						if os.path.isfile(require + '.prlx'):
							require += '.prlx'
							loaded = True
							run(open(require).read(), os.path.abspath(require), self.user_objects, 1)
					else:
						loaded = True
						run(open(require).read(), os.path.abspath(require), self.user_objects, 1)
					os.chdir('..')
					if loaded: continue
				os.chdir(og)
				if not os.path.isfile(require):
					if not os.path.isfile(require + '.prlx'):
						self.report(f"no file named '{require}'")
					require += '.prlx'
				_, error = run(
					open(require).read(), os.path.abspath(require),
					self.user_objects,
					1
				)
				if error: raise ProgramCrashedInstantly(error)
		elif task.mission == 'class':
			name = task.args[1]
			attrs = task.args[2]
			new_object = Object()
			new_object.name = name
			for attr in attrs:
				key = attr[0]
				value = attr[1]
				if isinstance(value, list):
					value = Table(value)
				if isinstance(value, Custom):
					if value.name == 'group':
						def invoke(self, value):
							parser = Parser(value.values)
							tokens, error = parser.start()
							if error:
								self.main.report(f'an error occurred in {name}\n* {error.as_string()}')
							
							table = self.main.user_objects
							table.set(name, self)
							interpreter = Interpreter(tokens, table)
							error = interpreter.start()
							if error:
								self.main.report(f'an error occurred in {name}\n* {error}')
						new_object.set(key, Custom('group', invoke, copy.deepcopy(value)))
					else:
						new_object.set(key, value)
				else:
					new_object.set(key, value)
			new_object.main = self
			setattr(Library, name, new_object)
		elif task.mission == 'break':
			raise BreakStatement
		elif task.mission == 'skip':
			raise SkipStatement
		elif task.mission == 'exit':
			raise ExitStatement
		self.unregister()

class Parser:
	def __init__(self, tokens):
		self.tokens = tokens
		self.idx = -1
		self.tok = None
		self.next()
	
	def next(self):
		if self.tokens == []: return
		self.idx += 1
		if self.idx >= len(self.tokens):
			self.tok = Token(Token.EOE, '', self.tokens[-1].ln, self.tokens[-1].src)
		else:
			self.tok = self.tokens[self.idx]
	
	def start(self):
		tasks = []
		if self.tokens == []: return [], None
		
		while not self.tok.istype(Token.EOF) and not self.tok.istype(Token.EOE):
			if self.tok.istype(Token.OBJ):
				result, error = self.make_new()
				if error:
					return [], error
				tasks.append(result)
			elif self.tok.istype(Token.USER_OBJ):
				result, error = self.make_edit()
				if error:
					return [], error
				tasks.append(result)
			elif self.tok.istype(Token.IF):
				result, error = self.make_if()
				if error:
					return [], error
				tasks.append(result)
			elif self.tok.istype(Token.LOOP):
				result, error = self.make_loop()
				if error:
					return [], error
				tasks.append(result)
			elif self.tok.istype(Token.REQUIRE):
				result, error = self.make_require()
				if error:
					return [], error
				tasks.append(result)
			elif self.tok.istype(Token.CLASS):
				result, error = self.make_class()
				if error:
					return [], error
				tasks.append(result)
				continue
			elif self.tok.istype(Token.BREAK):
				keyword = self.tok
				self.next()
				if not self.tok.isend():
					return None, Error(
						f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
					)
				tasks.append(Task('break', [keyword]))
			elif self.tok.istype(Token.SKIP):
				keyword = self.tok
				self.next()
				if not self.tok.isend():
					return None, Error(
						f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
					)
				tasks.append(Task('skip', [keyword]))
			elif self.tok.istype(Token.EXIT):
				keyword = self.tok
				self.next()
				if not self.tok.isend():
					return None, Error(
						f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
					)
				tasks.append(Task('exit', [keyword]))
			elif self.tok.isend(): pass
			else:
				return None, Error(
					f"invalid syntax at {self.tok.type}", self.tok.ln, self.tok.src
				)
			self.next()
		
		return tasks, None
	
	def make_new(self):
		object = self.tok
		self.next()
		if not self.tok.istype(Token.USER_OBJ):
			return None, Error(
				f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
			)
		new_var = self.tok
		self.next()
		edits = []
		if self.tok.isend():
			pass
		elif self.tok.istype(Token.COLON):
			while self.tok.istype(Token.COLON) and not self.tok.isend():
				self.next()
				if not self.tok.istype(Token.OBJ):
					return None, Error(
						"expected object/identifier after colon", self.tok.ln, self.tok.src
					)
				key = self.tok
				self.next()
				values = []
				while not self.tok.isend() and not self.tok.istype(Token.COLON):
					if self.tok.istype(Token.USER_OBJ):
						obj = self.tok
						self.next()
						if self.tok.istype(Token.COLON):
							self.next()
							if not self.tok.istype(Token.OBJ):
								return None, Error(
									"expected object/identifier after colon", self.tok.ln, self.tok.src
								)
							value = Task('get', [obj, self.tok])
					elif self.tok.isbtypes():
						value = self.tok.value
					elif self.tok.istype(Token.LCURLY):
						self.next()
						toks = []
						count = 0
						while not self.tok.istype(Token.EOF):
							toks.append(self.tok)
							self.next()
							if self.tok.istype(Token.LCURLY):
								count += 1
							elif self.tok.istype(Token.RCURLY):
								count -= 1
								if count >= 0:
									continue
								break
						if not self.tok.istype(Token.RCURLY):
							return None, Error(
								f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
							)
						value = Custom('group', *toks)
					else:
						break
					values.append(value)
					self.next()
				if len(values) == 0:
					value = None
				elif len(values) == 1:
					value = values[0]
				else:
					value = values
				edits.append([key, value])
				if self.tok == None: break
			if not self.tok.isend():
				return None, Error(
					f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
				)
		else:
			return None, Error(
				f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
			)
		return Task('new', [object, new_var, edits]), None
	
	def make_edit(self):
		user_obj = self.tok
		self.next()
		edits = []
		while self.tok.istype(Token.COLON) and not self.tok.isend():
			self.next()
			if not self.tok.istype(Token.OBJ):
				return None, Error(
					"expected object/identifier after colon", self.tok.ln, self.tok.src
				)
			key = self.tok
			self.next()
			values = []
			while not self.tok.isend() and not self.tok.istype(Token.COLON):
				if self.tok.istype(Token.USER_OBJ):
					obj = self.tok
					self.next()
					if self.tok.istype(Token.COLON):
						self.next()
						if not self.tok.istype(Token.OBJ):
							return None, Error(
								"invalid syntax after colon", self.tok.ln, self.tok.src
							)
						value = Task('get', [obj, self.tok])
				elif self.tok.isbtypes():
					value = self.tok.value
				elif self.tok.istype(Token.LCURLY):
					self.next()
					toks = []
					count = 0
					while not self.tok.istype(Token.EOF):
						toks.append(self.tok)
						self.next()
						if self.tok.istype(Token.LCURLY):
							count += 1
						elif self.tok.istype(Token.RCURLY):
							count -= 1
							if count >= 0:
								continue
							break
					if not self.tok.istype(Token.RCURLY):
						return None, Error(
							f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
						)
					value = Custom('group', *toks)
				else:
					break
				values.append(value)
				self.next()
			if len(values) == 0:
				value = None
			elif len(values) == 1:
				value = values[0]
			else:
				value = values
			edits.append([key, value])
			if self.tok == None: break
		return Task('edit', [user_obj, edits]), None
	
	def make_if(self):
		keyword = self.tok
		self.next()
		values = []
		while not self.tok.isend() and not self.tok.istype(Token.LCURLY):
			if self.tok.istype(Token.USER_OBJ):
				obj = self.tok
				self.next()
				if self.tok.istype(Token.COLON):
					self.next()
					if not self.tok.istype(Token.OBJ):
						return None, Error(
							"invalid syntax after colon", self.tok.ln, self.tok.src
						)
					value = Task('get', [obj, self.tok])
			elif self.tok.isbtypes():
				value = self.tok.value
			elif self.tok.istype(Token.LCURLY):
				self.next()
				toks = []
				count = 0
				while not self.tok.istype(Token.EOF):
					toks.append(self.tok)
					self.next()
					if self.tok.istype(Token.LCURLY):
						count += 1
					elif self.tok.istype(Token.RCURLY):
						count -= 1
						if count >= 0:
							continue
						break
				if not self.tok.istype(Token.RCURLY):
					return None, Error(
						f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
					)
				value = Custom('group', *toks)
			else:
				return None, Error(
					f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
				)
			values.append(value)
			self.next()
		if len(values) == 0:
			return None, Error(
				f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
			)
		elif len(values) == 1:
			value = values[0]
		else:
			value = values
		if not self.tok.istype(Token.LCURLY):
			return None, Error(
				f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
			)
		self.next()
		code = {}
		count = 0
		while not self.tok.istype(Token.EOF):
			if self.tok.istype(Token.LCURLY):
				count += 1
			elif self.tok.istype(Token.RCURLY):
				count -= 1
				if count < 0:
					break
			code[len(code.keys())] = self.tok
			self.next()
		if not self.tok.istype(Token.RCURLY):
			self.next()
		if not self.tok.istype(Token.RCURLY):
			return None, Error(
				f"expected rightbrace to close leftbrace", self.tok.ln, self.tok.src
			)
		return Task('if', [keyword, value, code]), None
	
	def make_loop(self):
		result, error = self.make_if()
		if error:
			return None, error
		result.mission = 'loop'
		return result, None
	
	def make_require(self):
		keyword = self.tok
		self.next()
		requires = []
		while self.tok.istype(Token.STR) or self.tok.istype(Token.OBJ):
			requires.append(self.tok)
			self.next()
		if not self.tok.isend():
			return None, Error(
				f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
			)
		return Task('require', [keyword, requires]), None
	
	def make_class(self):
		keyword = self.tok
		self.next()
		if not self.tok.istype(Token.OBJ):
			return None, Error(
				f"expected identifier after {keyword.type}", self.tok.ln, self.tok.src
			)
		name = self.tok
		self.next()
		attrs = []
		while self.tok.istype(Token.COLON) and not self.tok.isend():
			self.next()
			if not self.tok.istype(Token.OBJ):
				return None, Error(
					"expected object/identifier after colon", self.tok.ln, self.tok.src
				)
			key = self.tok
			self.next()
			values = []
			while not self.tok.isend() and not self.tok.istype(Token.COLON):
				if self.tok.istype(Token.USER_OBJ):
					obj = self.tok
					self.next()
					if self.tok.istype(Token.COLON):
						self.next()
						if not self.tok.istype(Token.OBJ):
							return None, Error(
								"expected object/identifier after colon", self.tok.ln, self.tok.src
							)
						value = Task('get', [obj, self.tok])
				elif self.tok.isbtypes():
					value = self.tok.value
				elif self.tok.istype(Token.LCURLY):
					self.next()
					toks = []
					count = 0
					while not self.tok.istype(Token.EOF):
						if self.tok.istype(Token.LCURLY):
							count += 1
						elif self.tok.istype(Token.RCURLY):
							count -= 1
							if count < 0:
								break
						toks.append(self.tok)
						self.next()
					if not self.tok.istype(Token.RCURLY):
						return None, Error(
							f"unexpected {self.tok.type}", self.tok.ln, self.tok.src
						)
					value = Custom('group', *toks)
				else:
					break
				values.append(value)
				self.next()
			if len(values) == 0:
				value = None
			elif len(values) == 1:
				value = values[0]
			else:
				value = values
			attrs.append([key, value])
			if self.tok == None: break
		return Task('class', [keyword, name, attrs]), None

class UserObjectTable:
	def __init__(self):
		self.data = {}
	
	def get(self, key):
		return self.data.get(key, None)
	
	def set(self, key, value):
		self.data[key] = value
	
	def remove(self, key):
		if self.get(key):
			del self.data[key]

class Interpreter:
	def __init__(self, tasks, table):
		self.tasks = tasks
		self.user_objects = table
		self.set = self.user_objects.set
		self.get = self.user_objects.get
		self.failed = False
		self.report_msg = None
		self.traceback = []
	
	def start(self):
		for task in self.tasks:
			try:
				task.do(self)
			except ProgramCrashed:
				return self.report_msg
			except ExitStatement:
				return None
		return None
	
	def register(self, token):
		self.traceback.append(token)
	
	def unregister(self):
		self.traceback.pop()
	
	def report_(self, msg):
		self.failed = True
		self.report_msg = msg
		self.crash()
	
	def report(self, details, in_ = None):
		self.failed = True
		if self.report_msg != None:
			self.report_msg = details
			self.crash()
		if len(self.traceback) == 0:
			self.report_msg = details
			self.crash()
		lastR = self.traceback.pop()
		result = f'{lastR.src}:{lastR.ln}: {details}'
		if in_:
			result += f' (in ${in_})'
		result += '\n'
		for registered_tok in self.traceback[::-1]:
			result += '  '
			result += f'from {registered_tok.src}:{registered_tok.ln}'
			result += '\n'
		result = result[:-1]
		self.report_msg = result
		self.crash()
	
	def crash(self):
		raise ProgramCrashed()

def better_eval(val1, op, val2):
	val1 = decimal.Decimal(val1)
	val2 = decimal.Decimal(val2)
	res = eval({
		'+': 'val1 + val2',
		'-': 'val1 - val2',
		'*': 'val1 * val2',
		'/': 'val1 / val2',
		'%': 'val1 % val2',
		'**': 'val1 ** val2',
	}[op])
	ret = float(res) if str(res).count('.') else int(res)
	return ret

def refreshTable(table : Table):
	if not isinstance(table, Table):
		return table
	for key in table.obj:
		if isinstance(table.obj[key], list):
			table.obj[key] = refreshTable(Table(table.obj[key]))
	return table

def memoize(func):
	cache = {}

	@functools.wraps(func)
	def wrapper(*args, **kwargs):
		key = str(args) + str(kwargs)

		if key not in cache:
			cache[key] = func(*args, **kwargs)
		
		return cache[key]
	
	return wrapper

@functools.lru_cache(maxsize=128)
@memoize
def run(text, src, table, TIMES=0, traceback=[]):
	origin_dir = os.getcwd()
	try:
		os.chdir(os.path.dirname(src))
	except OSError:
		pass

	lexer = Lexer(text, src)
	tokens, error = lexer.start()

	if error:
		return None, error.as_string()
	
	parser = Parser(tokens)
	tasks, error = parser.start()
	
	if error:
		return None, error.as_string()
	
	interpreter = Interpreter(tasks, table)
	interpreter.traceback = traceback
	if TIMES == 0:
		SYSTEM_TABLE.set('io', Library.io.new('io', interpreter))
		SYSTEM_TABLE.set('math', Library.math.new('math', interpreter))
		SYSTEM_TABLE.set('garbagecollect', Library.garbagecollect.new('garbagecollect', interpreter))
		SYSTEM_TABLE.set('utils', Library.utils.new('utils', interpreter))
		SYSTEM_TABLE.set('table', Library.table.new('table', interpreter))
		SYSTEM_TABLE.set('string', Library.string.new('string', interpreter))
		SYSTEM_TABLE.set('cdll', Library.cdll.new('cdll', interpreter))
		SYSTEM_TABLE.set('os', Library.os.new('os', interpreter))
	try:
		error = interpreter.start()
		os.chdir(origin_dir)
		for spawn in SPAWNS:
			spawn_error = spawn[0].start()
			if spawn_error:
				try:
					spawn[2].main.report(f'an error occurred in {spawn[1]}\n* {error}', spawn[1])
				except ProgramCrashed:
					return None, spawn[2].main.report_msg
	except SkipStatement:
		try:
			interpreter.report('\'skip\' not properly in loop')
		except:
			return None, interpreter.report_msg
	except BreakStatement:
		try:
			interpreter.report('\'break\' not properly in loop')
		except:
			return None, interpreter.report_msg
	except RecursionError:
		try:
			interpreter.report('stack overflow')
		except:
			return None, interpreter.report_msg
	except KeyboardInterrupt:
		try:
			interpreter.report('program interrupted')
		except:
			return None, interpreter.report_msg
	except ProgramCrashedInstantly as report_msg:
				return None, report_msg.message
	except SystemExit as exit:
		sys.exit(exit.code)
	except OverflowError:
		try:
			interpreter.report('object size overflow')
		except:
			return None, interpreter.report_msg
	except MemoryError:
		try:
			interpreter.report('out of memory')
		except:
			return None, interpreter.report_msg
	except Exception:
		try:
			interpreter.report(f'an fatal system error occurred')
		except:
			return None, interpreter.report_msg
	return None, error

def main():
	global TIMES

	if len(sys.argv) > 1:
		if sys.argv[1] == '--version':
			print(f"Prolix {VERSION}")
			return
		else:
			filename = sys.argv[1]
		if not os.path.isfile(filename):
			if not os.path.isfile(filename + '.prlx'):
				print(f"no file named '{filename}' even '{filename}.prlx'")
				return
			else:
				filename = filename + '.prlx'
		file = open(filename)
		src = os.path.abspath(filename)
		result, error = run(file.read(), src, SYSTEM_TABLE)
		
		if error:
			print(error)
			return
		elif result:
			print(result)

		return

	print(f'Prolix {VERSION} (C) 2023-2024 @_morlus')
	# print('Type ".edit" to enter edit mode, ".exit" to exit interpreter.')
	while True:
		try:
			text = input('> ')
		except KeyboardInterrupt:
			break
		except EOFError:
			print('eof error')
			break
		"""
		if text.rstrip().lstrip() == '.edit':
			print('Type ".exit" to exit edit mode.')
			text = ''
			while True:
				try:
					in_ = input('~ ')
				except KeyboardInterrupt:
					print('')
					break
				except EOFError:
					print('eof error')
					break
				if in_.rstrip().lstrip() == '.exit': text = text[:-1]; break
				text += in_ + '\n'
		"""
		result, error = run(text, "stdin", SYSTEM_TABLE, TIMES)
		
		if error:
			print(error)
		elif result:
			print(result)
		TIMES += 1

SYSTEM_TABLE = UserObjectTable()
TIMES = 0
START_TIME = time.time()
SPAWNS = []
VERSION = '2.1.0'

if __name__ == '__main__':
	main()