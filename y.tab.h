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
    INT = 258,
    ID = 259,
    STRING = 260,
    CHAR = 261,
    MAIN = 262,
    ELSE = 263,
    RETURN = 264,
    WHEN = 265,
    DO = 266,
    REPEAT = 267,
    FOR = 268,
    END = 269,
    PRINTF = 270,
    DOT = 271,
    COLON = 272,
    SEMICOLON = 273,
    COMMA = 274,
    T_INT = 275,
    T_STRING = 276,
    T_CHAR = 277,
    T_DOUBLE = 278,
    CONSTANT = 279,
    OPEN_CURLY_PARENTHESES = 280,
    CLOSE_CURLY_PARENTHESES = 281,
    OPEN_PARENTHESES = 282,
    CLOSE_PARENTHESES = 283,
    OPEN_BRACKETS = 284,
    CLOSE_BRACKETS = 285,
    ASSIGN = 286,
    SUM_ASSIGN = 287,
    SUB_ASSIGN = 288,
    MUL_ASSIGN = 289,
    DIV_ASSIGN = 290,
    OP_ASSIGN = 291,
    MOD_ASSIGN = 292,
    LEQ_THAN = 293,
    GEQ_THAN = 294,
    EQUAL = 295,
    NOT_EQUAL = 296,
    LESS_THAN = 297,
    GREATER_THAN = 298,
    AND = 299,
    OR = 300,
    NOT = 301,
    SUM = 302,
    SUB = 303,
    MULT = 304,
    DIV = 305,
    MOD = 306,
    PLUS = 307,
    MINUS = 308
  };
#endif
/* Tokens.  */
#define INT 258
#define ID 259
#define STRING 260
#define CHAR 261
#define MAIN 262
#define ELSE 263
#define RETURN 264
#define WHEN 265
#define DO 266
#define REPEAT 267
#define FOR 268
#define END 269
#define PRINTF 270
#define DOT 271
#define COLON 272
#define SEMICOLON 273
#define COMMA 274
#define T_INT 275
#define T_STRING 276
#define T_CHAR 277
#define T_DOUBLE 278
#define CONSTANT 279
#define OPEN_CURLY_PARENTHESES 280
#define CLOSE_CURLY_PARENTHESES 281
#define OPEN_PARENTHESES 282
#define CLOSE_PARENTHESES 283
#define OPEN_BRACKETS 284
#define CLOSE_BRACKETS 285
#define ASSIGN 286
#define SUM_ASSIGN 287
#define SUB_ASSIGN 288
#define MUL_ASSIGN 289
#define DIV_ASSIGN 290
#define OP_ASSIGN 291
#define MOD_ASSIGN 292
#define LEQ_THAN 293
#define GEQ_THAN 294
#define EQUAL 295
#define NOT_EQUAL 296
#define LESS_THAN 297
#define GREATER_THAN 298
#define AND 299
#define OR 300
#define NOT 301
#define SUM 302
#define SUB 303
#define MULT 304
#define DIV 305
#define MOD 306
#define PLUS 307
#define MINUS 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "yacc.y" /* yacc.c:1909  */

	/*struct Node_t * node;*/
	int integer;
	char * string;
	char character;

#line 167 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
