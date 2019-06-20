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
    DURING = 266,
    REPEAT = 267,
    END = 268,
    PRINTF = 269,
    READ = 270,
    DOT = 271,
    COLON = 272,
    SEMICOLON = 273,
    COMMA = 274,
    T_INT = 275,
    T_STRING = 276,
    T_CHAR = 277,
    T_DOUBLE = 278,
    OPEN_CURLY_PARENTHESES = 279,
    CLOSE_CURLY_PARENTHESES = 280,
    OPEN_PARENTHESES = 281,
    CLOSE_PARENTHESES = 282,
    OPEN_BRACKETS = 283,
    CLOSE_BRACKETS = 284,
    ASSIGN = 285,
    SUM_ASSIGN = 286,
    SUB_ASSIGN = 287,
    MUL_ASSIGN = 288,
    DIV_ASSIGN = 289,
    OP_ASSIGN = 290,
    MOD_ASSIGN = 291,
    LEQ_THAN = 292,
    GEQ_THAN = 293,
    EQUAL = 294,
    NOT_EQUAL = 295,
    LESS_THAN = 296,
    GREATER_THAN = 297,
    AND = 298,
    OR = 299,
    NOT = 300,
    SUM = 301,
    SUB = 302,
    MULT = 303,
    DIV = 304,
    MOD = 305,
    PLUS = 306,
    MINUS = 307
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
#define DURING 266
#define REPEAT 267
#define END 268
#define PRINTF 269
#define READ 270
#define DOT 271
#define COLON 272
#define SEMICOLON 273
#define COMMA 274
#define T_INT 275
#define T_STRING 276
#define T_CHAR 277
#define T_DOUBLE 278
#define OPEN_CURLY_PARENTHESES 279
#define CLOSE_CURLY_PARENTHESES 280
#define OPEN_PARENTHESES 281
#define CLOSE_PARENTHESES 282
#define OPEN_BRACKETS 283
#define CLOSE_BRACKETS 284
#define ASSIGN 285
#define SUM_ASSIGN 286
#define SUB_ASSIGN 287
#define MUL_ASSIGN 288
#define DIV_ASSIGN 289
#define OP_ASSIGN 290
#define MOD_ASSIGN 291
#define LEQ_THAN 292
#define GEQ_THAN 293
#define EQUAL 294
#define NOT_EQUAL 295
#define LESS_THAN 296
#define GREATER_THAN 297
#define AND 298
#define OR 299
#define NOT 300
#define SUM 301
#define SUB 302
#define MULT 303
#define DIV 304
#define MOD 305
#define PLUS 306
#define MINUS 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "yacc.y" /* yacc.c:1909  */

	/*struct Node_t * node;*/
	int integer;
	char * string;
	char character;

#line 165 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
