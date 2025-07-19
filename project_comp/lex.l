%{
#include <stdio.h>
#include "y.tab.h"
%}

%%
"bool"     {return BOOL;}
"char"     {return CHAR;}
"int"      {return INT;}
"real"     {return REAL;}
"string"   {return STRING;}
"int*"     {return INTPTR;}
"char*"    {return CHARPTR;}
"real*"    {return REALPTR;}
"var"      {return VAR;}
"void"     {return VOID;}
"null"     {yylval.str = "null"; return NULLL;}
"return"   {return RETURN;}
"function" {return FUNCTION;}

true       {yylval.str= "true"; return TRUE;}
false      {yylval.str= "false"; return FALSE;}

"if"       {return IF;}
"else"     {return ELSE;}
"while"    {return WHILE;}
"for"      {return FOR;}
"do"       {return DO;}

"&&"       {return AND;}
"/"        {return yytext[0];}
"=="       {return EQL;}
"="        {return yytext[0];}
">="       {return BIGGEREQL;}
">"        {return yytext[0];}
"<="       {return SMALLEREQL;}
"<"        {return yytext[0];}
"-"        {return yytext[0];}
"!="       {return NOTEQL;}
"!"        {return yytext[0];}
"||"       {return OR;}
"+"        {return yytext[0];}
"*"        {return yytext[0];}
"&"        {return yytext[0];}
"Arg->"    {return ARG;}
":"        {return yytext[0];}
";"        {return yytext[0];}
"("        {return yytext[0];}
")"        {return yytext[0];}


[a-zA-Z0-9_]*	                {yylval.str = strdup(yytext); return ID;}
[[1-9][0-9]*|0[xX][0-9A-Fa-f]+  {yylval.str = strdup(yytext); return INTVAL;}
[0-9]+[.][0-9]+                 {yylval.str = strdup(yytext); return REALVAL;}
['][!-~][']                     {yylval.str = strdup(yytext); return CHARVAL;}
["][ !#-~]*["]                  {yylval.str = strdup(yytext); return STRINGVAL;}

"/*"([\n -)+-.0-~][/*]?[\n -)+-.0-~]+[/*]?[\n -)+-.0-~])*"*/" ;

" "|"\t" ;

"\n"        {yylineno++;}

. return yytext[0];
%%

