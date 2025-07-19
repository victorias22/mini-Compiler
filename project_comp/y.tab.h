/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BOOL = 258,                    /* BOOL  */
    CHAR = 259,                    /* CHAR  */
    INT = 260,                     /* INT  */
    REAL = 261,                    /* REAL  */
    STRING = 262,                  /* STRING  */
    INTPTR = 263,                  /* INTPTR  */
    CHARPTR = 264,                 /* CHARPTR  */
    REALPTR = 265,                 /* REALPTR  */
    VAR = 266,                     /* VAR  */
    VOID = 267,                    /* VOID  */
    FUNCTION = 268,                /* FUNCTION  */
    NULLL = 269,                   /* NULLL  */
    RETURN = 270,                  /* RETURN  */
    TRUE = 271,                    /* TRUE  */
    FALSE = 272,                   /* FALSE  */
    IF = 273,                      /* IF  */
    ELSE = 274,                    /* ELSE  */
    WHILE = 275,                   /* WHILE  */
    FOR = 276,                     /* FOR  */
    DO = 277,                      /* DO  */
    AND = 278,                     /* AND  */
    DIV = 279,                     /* DIV  */
    EQL = 280,                     /* EQL  */
    BIGGEREQL = 281,               /* BIGGEREQL  */
    SMALLEREQL = 282,              /* SMALLEREQL  */
    NOTEQL = 283,                  /* NOTEQL  */
    OR = 284,                      /* OR  */
    ID = 285,                      /* ID  */
    INTVAL = 286,                  /* INTVAL  */
    REALVAL = 287,                 /* REALVAL  */
    CHARVAL = 288,                 /* CHARVAL  */
    STRINGVAL = 289,               /* STRINGVAL  */
    ARG = 290                      /* ARG  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define BOOL 258
#define CHAR 259
#define INT 260
#define REAL 261
#define STRING 262
#define INTPTR 263
#define CHARPTR 264
#define REALPTR 265
#define VAR 266
#define VOID 267
#define FUNCTION 268
#define NULLL 269
#define RETURN 270
#define TRUE 271
#define FALSE 272
#define IF 273
#define ELSE 274
#define WHILE 275
#define FOR 276
#define DO 277
#define AND 278
#define DIV 279
#define EQL 280
#define BIGGEREQL 281
#define SMALLEREQL 282
#define NOTEQL 283
#define OR 284
#define ID 285
#define INTVAL 286
#define REALVAL 287
#define CHARVAL 288
#define STRINGVAL 289
#define ARG 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "project.y"

  char *str;

#line 141 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
