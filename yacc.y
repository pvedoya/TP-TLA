%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
/*	#include "node.h"*/

extern int yylex();
/*static Node * root;*/
void yyerror(char * s);
%}

%start program

/*Represents how to access data*/
%union {
	/*struct Node_t * node;*/
	int integer;
	char * string;
	char character;
}

/*Definition of tokens, they use the token names defined in the lex.l file*/

%token <integer> INT
%token <string> ID STRING
%token <character> CHAR

/*%token <node> MAIN ELSE RETURN WHEN DO REPEAT FOR DOT END PRINTF ASSIGN SUM_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN OP_ASSIGN MOD_ASSIGN
		LEQ_THAN GEQ_THAN EQUAL NOT_EQUAL LESS_THAN GREATER_THAN AND OR NOT SUM SUB MULT DIV MOD COLON SEMICOLON COMMA 
		OPEN_CURLY_PARENTHESES CLOSE_CURLY_PARENTHESES OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_BRACKETS CLOSE_BRACKETS CONSTANT*/


%token MAIN ELSE RETURN WHEN DO REPEAT FOR END PRINTF
%token DOT COLON SEMICOLON COMMA 
%token T_INT T_STRING T_CHAR T_DOUBLE CONSTANT
%token OPEN_CURLY_PARENTHESES CLOSE_CURLY_PARENTHESES OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_BRACKETS CLOSE_BRACKETS
%token ASSIGN SUM_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN OP_ASSIGN MOD_ASSIGN
%token LEQ_THAN GEQ_THAN EQUAL NOT_EQUAL LESS_THAN GREATER_THAN 
%token AND OR NOT SUM SUB MULT DIV MOD

/*Precedence of actions, the least important come first.*/

%right ASSIGN SUM_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN OP_ASSIGN MOD_ASSIGN LEQ_THAN GEQ_THAN LESS_THAN GREATER_THAN
%left PLUS MINUS
%left MULT DIV MOD
%left AND OR EQUAL NOT_EQUAL

%%

program		:	sentence													{;}
	 	;
sentence	:	sentence function												{;}
	 	|	main														{;}
		;
main		:	MAIN OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES 			{;}
      		;
function	:	type ID OPEN_PARENTHESES arguments CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES	{;}
	 	;
type		:	T_INT														{;}
      		|	T_STRING													{;}
		|	T_CHAR														{;}
		;
arguments	:															{;}
	  	|	arg														{;}
		;
arg		:	var COMMA arg													{;}
     		|	var														{;}
		;
var		:	type ID														{;}
     		;
code		:															{;}
      		|	lines														{;}
		;
lines		:	line lines													{;}
       		|	line														{;}
		;
line		:	declare DOT													{;}
       		|	assign DOT													{;}
		|	call_function DOT												{;}
		|	return DOT													{;}
		|	when														{;}
		|	repeat														{;}
		;
declare		:	NUM ID EQUAL value												{;}
	 	|	type ID EQUAL ID												{;}
	 	|	T_STRING ID EQUAL STRING											{;}
		|	T_STRING ID EQUAL call_function											{;}
		|	T_CHAR ID EQUAL CHAR												{;}	
		|	T_CHAR ID EQUAL call_function    										{;}
		;
assign		:	ID assval value													{;}
		|	ID assval STRING												{;}
		|	ID assval CHAR													{;}
		;
assval		:	ASSIGN														{;}
		|	SUM_ASSIGN													{;}
		|	SUB_ASSIGN													{;}
		|	MUL_ASSIGN													{;}
		|	DIV_ASSIGN													{;}
		|	OP_ASSIGN													{;}
		|	MOD_ASSIGN													{;}
		;
value		:	ID														{;}
       		|	NUM														{;}
		|	call_function													{;}
		|	value PLUS value												{;}
		|	value MINUS value												{;}
		|	value MULT value												{;}
		|	value DIV value													{;}
		|	value MOD value													{;}
		;	//TODO: ver si falta alguna			
call_function	:	ID OPEN_PARENTHESES arguments CLOSE_PARENTHES									{;} 
		|	PRINTF OPEN_PARENTHESES arguments CLOSE_PARENTHESES								{;}
		;
return		:	RETURN value													{;}
		|	RETURN STRING													{;}
		|	RETURN CHAR													{;}
		;
when		:	WHEN OPEN_PARENTHESES condition CLOSE_PARENTHESES DO OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES else	{;}
      		;
else     	:	ELSE OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES							{;}
		|	ELSE WHEN OPEN PARENTHESES condition CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES else	{;}
		|															{;}
		;
repeat		:	REPEAT OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES WHEN OPEN_PARENTHESES condition CLOSE_PARENTHESES	{;}
		|	WHEN OPEN_PARENTHESES condition CLOSE_PARENTHESES REPEAT OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES	{;}
		;
condition	:	expression													{;}
	  	|	condition AND condition												{;}
		|	condition OR condition												{;}
		|	NOT condition													{;}
		;
expression	:	call_function													{;}
	   	|	ID														{;}
		|	value compare value												{;}
		;
compare		:	EQUAL														{;}
	 	|	NOT_EQUAL													{;}
		|	LEQ_THAN													{;}
		|	GEQ_THAN													{;}	
		|	LESS_THAN													{;}
		|	GREATER_THAN													{;}
		;	






%%

int main(){
	yyparse();
	return 0;
}

void yyerror(char * s){
	fprintf(stderr, "%s\n", s);
	return;
}
