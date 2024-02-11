#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* type;
    void* value;
    int ln;
    char* src;
} Token;

Token* create_token(char* type, void* value, int ln, char* src) {
    Token* token = malloc(sizeof(Token));
    token->type = type;
    token->value = value;
    token->ln = ln;
    token->src = src;
    return token;
}

int is_type(Token* token, char* type) {
    return strcmp(token->type, type) == 0;
}

int is_end(Token* token) {
    char* types[] = {"newline", "semicolon", "eof", "eoe"};
    int num_types = sizeof(types) / sizeof(types[0]);
    for (int i = 0; i < num_types; i++) {
        if (strcmp(token->type, types[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int is_btypes(Token* token) {
    char* types[] = {"str", "none", "num", "table"};
    int num_types = sizeof(types) / sizeof(types[0]);
    for (int i = 0; i < num_types; i++) {
        if (strcmp(token->type, types[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

Token* copy_token(Token* token) {
    Token* new_token = malloc(sizeof(Token));
    new_token->type = token->type;
    new_token->value = token->value;
    new_token->ln = token->ln;
    new_token->src = token->src;
    return new_token;
}

typedef struct {
    char* details;
    int ln;
    char* src;
} Error;

Error* create_error(char* details, int ln, char* src) {
    Error* error = malloc(sizeof(Error));
    error->details = details;
    error->ln = ln;
    error->src = src;
    return error;
}

char* error_as_string(Error* error) {
    char* result = malloc(strlen(error->src) + 10 + strlen(error->details) + 1);
    sprintf(result, "%s:%d: %s", error->src, error->ln, error->details);
    return result;
}

typedef struct {
    int idx;
    int ln;
    char* src;
    char* text;
    char* character;
} Lexer;

Lexer* create_lexer(char* text, char* src) {
    Lexer* lexer = malloc(sizeof(Lexer));
    lexer->idx = -1;
    lexer->ln = 1;
    lexer->src = src;
    lexer->text = text;
    lexer->character = NULL;
    return lexer;
}

void next(Lexer* lexer) {
    lexer->idx += 1;
    if (lexer->idx >= strlen(lexer->text)) {
        lexer->character = NULL;
    } else {
        lexer->character = &lexer->text[lexer->idx];
    }
    if (lexer->character[0] == '\n') {
        lexer->ln += 1;
    }
}

Token* tok(Lexer* lexer, char* type, void* value) {
    return create_token(type, value, lexer->ln, lexer->src);
}

void start(Lexer* lexer, Token** tokens, Error** error) {
    int num_tokens = 0;
    while (lexer->character != NULL) {
        if (lexer->character[0] == ':') {
            tokens[num_tokens++] = tok(lexer, "colon", ":");
        } else if (lexer->character[0] == ';') {
            tokens[num_tokens++] = tok(lexer, "semicolon", ";");
        } else if (lexer->character[0] == '{') {
            tokens[num_tokens++] = tok(lexer, "leftbrace", "{");
        } else if (lexer->character[0] == '}') {
            tokens[num_tokens++] = tok(lexer, "rightbrace", "}");
        } else if (lexer->character[0] == '"' || lexer->character[0] == '\'') {
            Token* result = make_str(lexer, error);
            if (*error != NULL) {
                return;
            }
            tokens[num_tokens++] = result;
        } else if (isdigit(lexer->character[0]) || lexer->character[0] == '.') {
            Token* result = make_num(lexer, error);
            if (*error != NULL) {
                return;
            }
            tokens[num_tokens++] = result;
            continue;
        } else if (isalpha(lexer->character[0]) || lexer->character[0] == '_') {
            tokens[num_tokens++] = make_id(lexer);
            continue;
        } else if (lexer->character[0] == '$') {
            Token* result = make_usr_obj(lexer, error);
            if (*error != NULL) {
                return;
            }
            tokens[num_tokens++] = result;
            continue;
        } else if (lexer->character[0] == '\n') {
            while (lexer->character[0] != '\n' && lexer->character != NULL) {
                next(lexer);
            }
        } else if (lexer->character[0] == '-') {
            next(lexer);
            while (lexer->character[0] == ' ' || lexer->character[0] == '\n' || lexer->character[0] == '\t') {
                next(lexer);
            }
            if (lexer->character == NULL) {
                *error = create_error("eof reached", lexer->ln, lexer->src);
                return;
            }
            if (!(isdigit(lexer->character[0]) || lexer->character[0] == '.')) {
                *error = create_error("invalid syntax after '-'", lexer->ln, lexer->src);
                return;
            }
            Token* result = make_num(lexer, error);
            if (*error != NULL) {
                return;
            }
            result->value = -result->value;
            tokens[num_tokens++] = result;
            continue;
        } else if (lexer->character[0] == ' ' || lexer->character[0] == '\t' || lexer->character[0] == '\n') {
            // Do nothing
        } else {
            *error = create_error("invalid character", lexer->ln, lexer->src);
            return;
        }
        next(lexer);
    }
    tokens[num_tokens++] = tok(lexer, "eof", "");
    *error = NULL;
}

Token* make_str(Lexer* lexer, Error** error) {
    char delimiter = lexer->character[0];
    int start_ln = lexer->ln;
    char* result = malloc(1);
    result[0] = '\0';
    next(lexer);
    int skip = 0;
    while (lexer->character != NULL && lexer->character[0] != delimiter) {
        char* temp = malloc(strlen(result) + 2);
        strcpy(temp, result);
        temp[strlen(result)] = lexer->character[0];
        temp[strlen(result) + 1] = '\0';
        free(result);
        result = temp;
        next(lexer);
        if (lexer->character[0] == '\\') {
            skip = 1;
        } else if (lexer->character[0] == delimiter) {
            if (skip) {
                skip = 0;
                char* temp = malloc(strlen(result) + 2);
                strcpy(temp, result);
                temp[strlen(result)] = lexer->character[0];
                temp[strlen(result) + 1] = '\0';
                free(result);
                result = temp;
                next(lexer);
            }
        } else {
            skip = 0;
        }
    }
    if (lexer->character == NULL) {
        *error = create_error("incomplete string", start_ln, lexer->src);
        return NULL;
    }
    char* escape_chars[] = {"\\n", "\\\\", "\\t", "\\0", "\\a"};
    char* replace_chars[] = {"\n", "\\", "\t", "\0", "\x1b"};
    int num_escape_chars = sizeof(escape_chars) / sizeof(escape_chars[0]);
    for (int i = 0; i < num_escape_chars; i++) {
        char* temp = malloc(strlen(result) + 1);
        strcpy(temp, result);
        char* pos = strstr(temp, escape_chars[i]);
        while (pos != NULL) {
            int index = pos - temp;
            temp[index] = '\0';
            char* new_temp = malloc(strlen(temp) + strlen(replace_chars[i]) + strlen(pos + strlen(escape_chars[i])) + 1);
            strcpy(new_temp, temp);
            strcat(new_temp, replace_chars[i]);
            strcat(new_temp, pos + strlen(escape_chars[i]));
            free(temp);
            temp = new_temp;
            pos = strstr(temp, escape_chars[i]);
        }
        free(result);
        result = temp;
    }
    return create_token("str", result, start_ln, lexer->src);
}

Token* make_num(Lexer* lexer, Error** error) {
    char* result = malloc(2);
    result[0] = lexer->character[0];
    result[1] = '\0';
    int start_ln = lexer->ln;
    next(lexer);
    while (lexer->character != NULL) {
        if (isdigit(lexer->character[0]) || lexer->character[0] == '.') {
            // Do nothing
        } else if (lexer->character[0] == 'x') {
            if (strcmp(result, "0") == 0) {
                // Do nothing
            } else {
                break;
            }
        } else if (lexer->character[0] == 'b') {
            if (strcmp(result, "0") == 0) {
                // Do nothing
            } else {
                break;
            }
        } else {
            break;
        }
        if (lexer->character[0] == '.') {
            if (strchr(result, '.') != NULL) {
                break;
            }
            if (strchr(result, 'x') != NULL) {
                break;
            }
        }
        char* temp = malloc(strlen(result) + 2);
        strcpy(temp, result);
        temp[strlen(result)] = lexer->character[0];
        temp[strlen(result) + 1] = '\0';
        free(result);
        result = temp;
        next(lexer);
    }
    if (strcmp(result, ".") == 0) {
        result = "0.0";
    } else if (strncmp(result, "0x", 2) == 0 || strncmp(result, "0b", 2) == 0) {
        char* endptr;
        double value = strtod(result, &endptr);
        if (*endptr != '\0') {
            *error = create_error(endptr, start_ln, lexer->src);
            return NULL;
        }
        result = malloc(sizeof(double));
        memcpy(result, &value, sizeof(double));
    } else if (strchr(result, '.') != NULL) {
        double value = atof(result);
        result = malloc(sizeof(double));
        memcpy(result, &value, sizeof(double));
    } else {
        int value = atoi(result);
        result = malloc(sizeof(int));
        memcpy(result, &value, sizeof(int));
    }
    return create_token("num", result, start_ln, lexer->src);
}

Token* make_id(Lexer* lexer) {
    char* result = malloc(2);
    result[0] = lexer->character[0];
    result[1] = '\0';
    int start_ln = lexer->ln;
    next(lexer);
    while (lexer->character != NULL) {
        char* temp = malloc(strlen(result) + 2);
        strcpy(temp, result);
        temp[strlen(result)] = lexer->character[0];
        temp[strlen(result) + 1] = '\0';
        free(result);
        result = temp;
        if (!isalpha(lexer->character[0]) && !isdigit(lexer->character[0]) && lexer->character[0] != '_') {
            result[strlen(result) - 1] = '\0';
            break;
        }
        next(lexer);
    }
    char* keywords[] = {"if", "loop", "break", "require", "class", "skip"};
    int num_keywords = sizeof(keywords) / sizeof(keywords[0]);
    for (int i = 0; i < num_keywords; i++) {
        if (strcmp(result, keywords[i]) == 0) {
            char* type = malloc(strlen(result) + 8);
            sprintf(type, "keyword %s", result);
            return create_token(type, NULL, start_ln, lexer->src);
        }
    }
    if (strcmp(result, "none") == 0) {
        return create_token("none", NULL, start_ln, lexer->src);
    }
    return create_token("object/identifier", result, start_ln, lexer->src);
}

Token* make_usr_obj(Lexer* lexer, Error** error) {
    int start_ln = lexer->ln;
    next(lexer);
    while (lexer->character[0] == ' ' || lexer->character[0] == '\n' || lexer->character[0] == '\t') {
        next(lexer);
    }
    if (lexer->character == NULL) {
        *error = create_error("invalid syntax near '$'", start_ln, lexer->src);
        return NULL;
    } else if (!isalpha(lexer->character[0])) {
        *error = create_error("invalid syntax near '$'", start_ln, lexer->src);
        return NULL;
    }
    Token* result = make_id(lexer);
    result->type = "userobject";
    return result;
}

int main() {
    Token* tokens[100];
    Error* error = NULL;
    Lexer* lexer = create_lexer("", "");
    start(lexer, tokens, &error);
    if (error != NULL) {
        printf("%s\n", error_as_string(error));
        return 1;
    }
    for (int i = 0; tokens[i] != NULL; i++) {
        printf("%s:%s\n", tokens[i]->type, tokens[i]->value);
    }
    return 0;
}


