%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 256

extern int yylineno;
extern char *yytext;
int yylex(void);
void yyerror(const char *s);
int yydebug = 0;
%}

%union {
  char *str;
}

%token <str> BOOL CHAR INT REAL STRING INTPTR CHARPTR REALPTR VAR VOID FUNCTION
%token <str> NULLL RETURN TRUE FALSE IF ELSE WHILE FOR DO
%token <str> AND DIV EQL BIGGEREQL SMALLEREQL
%token <str> NOTEQL OR
%token <str> ID INTVAL REALVAL CHARVAL STRINGVAL
%token <str> ARG

%%
CODE: BLOCK;

BLOCK: FUNC PROC
     | PROC
     ; 

PROC: FUNCTION ID '(' ')' ':' VOID '{' BODY '}';

FUNC: FUNCTION ID '(' ')' ':' TYPE '{' BODY '}';

BODY: STATEMENT;

STATEMENT: STATE
         | STATEMENT STATE 
         ;

STATE: TYPE ID ':' INPUT ';'
     | TYPE ID '=' ID ';'
     | ID '=' FUNC '(' ')' ';'
     | ID '=' ID ';'
     | RETURN INPUT ';'
     ;

INPUT: INTVAL 
     | REALVAL
     | CHARVAL
     | STRINGVAL
     | ID
     ;

TYPE: BOOL
    | VAR
    | CHAR
    | INT
    | REAL
    | STRING
    | INTPTR
    | CHARPTR
    | REALPTR
    ;
%%

void main(){
    yyparse();
    if(!yydebug){
        printf("Its Works!\n");
    }
}

void yyerror(const char *s) {
  yydebug = 1;
  fflush(stdout);
  fprintf(stderr, "Error: %s at line %d\n", s, yylineno);
  fprintf(stderr, "does not accept '%s'\n", yytext);
}

int yywrap() {
    return 1;
}
