%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "y.tab.h"
	void yyerror(char * s);
	int yylex();
	

//"for"                   {return FOR;} FALTA VER DE AGREGAR ESTO
%}

%option 
digit			[0-9]
number			[0-9]+
letter			[a-zA-Z]
/*decimal			-?{digit}+(\.{digit}+)?*/
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
"during"		{return DURING;}
"repeat"		{return REPEAT;}
"."			{return DOT;}
"printf"		{return PRINTF;}
"read"			{return READ;}
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
"end"			{return END;}

'({letter}|{digit})'		{yylval.character = yytext[1];
			return CHAR;
			}


{number}		{yylval.integer = strtol(yytext, NULL, 10);
			return INT;
			}

{word}			{char * text = malloc(strlen(yytext)+1);
			strcpy(text,yytext);
			yylval.string = text;
			return ID;
			}

\".*\"			{char *text = malloc(strlen(yytext)+1);
			strcpy(text, yytext);
			yylval.string = text;
			return STRING;
			}


%%
int yywrap(void){
	return 1;
}
