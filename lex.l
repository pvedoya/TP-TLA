%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "y.tab.h"
	void yyerror(char * s);
	int yylex();
%}

%option noyywrap

digit			[0-9]+
letter			[a-zA-Z]
//number			-?{digit}+(\.{digit}+)?
word			[a-zA-Z][a-zA-Z0-9_]*
void			[ \t\n]
space			{void}+


%%
--.*--			;/* comments are ignored */
{space}			;/* does nothing */
"main"			{return MAIN;}
"else"			{return ELSE;}
"return"		{return RETURN;}
"when"			{return WHEN;}
"do"			{return DO;}
"repeat"		{return REPEAT;}
"for"			{return FOR;}
"."			{return DOT;}
"end"			{return END;}
"printf"		{return PRINTF;}
"="			{return ASSIGN;}
"+="			{return SUM_ASSIGN;}
"-="			{return SUB_ASSIGN;}
"*="			{return MUL_ASSIGN;}
"/="			{return DIV_ASSIGN;}
"!="			{return OP_ASSIGN;}
"%="			{return MOD_ASSIGN;}
"<="			{return LEQ_THAN;}
">="			{return GEQ_THAN;}
"=="			{return EQUAL;}
"<>"			{return NOT_EQUAL;}
"<"			{return LESS_THAN;}
">"			{return GREATER_THAN;}
"&"			{return AND;}
"|"			{return OR;}
"!"			{return NOT;}
"+"			{return SUM;}
"-"			{return SUB;}
"*"			{return MULT;}
"/"			{return DIV;}
"%"			{return MOD;}
";"			{return COLON;}
":"			{return SEMICOLON;}
","			{return COMMA;}
"{"			{return OPEN_CURLY_PARENTHESES;}
"}"			{return CLOSE_CURLY_PARENTHESES;}
"("			{return OPEN_PARENTHESES;}
")"			{return CLOSE_PARENTHESES;}
"["			{return OPEN_BRACKETS;}
"]"			{return CLOSE_BRACKETS;}
"num"			{return T_INT;}
"str"			{return T_STRING;} 
"var"			{return T_CHAR;}
"fix"			{return CONSTANT;}

{number}		{yylval.integer = strtol(yytext, NULL, 10);
			return NUM;
			}

{word}			{char * text = malloc(strlen(yytext)+);
			strcpy(text,yytext);
			yyval.string = text;
			return ID;
			}

{letter}		{char letter =  yytext;
			yyval.character = letter;
			return CHAR;
			}

\".*\"			{char *text = malloc(strlen(yytext)+1);
			strcpy(text, yytext);
			yyval.string = text;
			return STRING;
			}


%%
int yywrap(void){
	return 1;
}
