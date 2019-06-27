/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    STRING = 259,
    INT = 260,
    CHAR = 261,
    DECIMAL = 262,
    MAIN = 263,
    ELSE = 264,
    RETURN = 265,
    WHEN = 266,
    DURING = 267,
    REPEAT = 268,
    DOT = 269,
    PRINTF = 270,
    READ = 271,
    ASSIGN = 272,
    SUM_ASSIGN = 273,
    SUB_ASSIGN = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    OP_ASSIGN = 277,
    MOD_ASSIGN = 278,
    LEQ_THAN = 279,
    GEQ_THAN = 280,
    EQUAL = 281,
    NOT_EQUAL = 282,
    LESS_THAN = 283,
    GREATER_THAN = 284,
    AND = 285,
    OR = 286,
    NOT = 287,
    SUM = 288,
    SUB = 289,
    MULT = 290,
    DIV = 291,
    MOD = 292,
    COLON = 293,
    SEMICOLON = 294,
    COMMA = 295,
    OPEN_CURLY_PARENTHESES = 296,
    CLOSE_CURLY_PARENTHESES = 297,
    OPEN_PARENTHESES = 298,
    CLOSE_PARENTHESES = 299,
    OPEN_BRACKETS = 300,
    CLOSE_BRACKETS = 301,
    CONSTANT = 302,
    T_CHAR = 303,
    T_INT = 304,
    T_STRING = 305,
    T_DECIMAL = 306,
    T_VOID = 307,
    END = 308
  };
#endif
/* Tokens.  */
#define ID 258
#define STRING 259
#define INT 260
#define CHAR 261
#define DECIMAL 262
#define MAIN 263
#define ELSE 264
#define RETURN 265
#define WHEN 266
#define DURING 267
#define REPEAT 268
#define DOT 269
#define PRINTF 270
#define READ 271
#define ASSIGN 272
#define SUM_ASSIGN 273
#define SUB_ASSIGN 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define OP_ASSIGN 277
#define MOD_ASSIGN 278
#define LEQ_THAN 279
#define GEQ_THAN 280
#define EQUAL 281
#define NOT_EQUAL 282
#define LESS_THAN 283
#define GREATER_THAN 284
#define AND 285
#define OR 286
#define NOT 287
#define SUM 288
#define SUB 289
#define MULT 290
#define DIV 291
#define MOD 292
#define COLON 293
#define SEMICOLON 294
#define COMMA 295
#define OPEN_CURLY_PARENTHESES 296
#define CLOSE_CURLY_PARENTHESES 297
#define OPEN_PARENTHESES 298
#define CLOSE_PARENTHESES 299
#define OPEN_BRACKETS 300
#define CLOSE_BRACKETS 301
#define CONSTANT 302
#define T_CHAR 303
#define T_INT 304
#define T_STRING 305
#define T_DECIMAL 306
#define T_VOID 307
#define END 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "yacc.y" /* yacc.c:1909  */

	struct Node * node;
	char * string;

#line 165 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
