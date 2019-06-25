%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#include <string.h>
	#include "node.h"

	int yylex();
	void yyerror(char * s);
	char buff[30];
%}

%start program

/*Represents how to access data*/
%union {
	struct Node * node;
	char * string;
}

/*Definition of tokens, they use the token names defined in the lex.l file*/

%token <string> ID STRING INT CHAR

%token MAIN ELSE RETURN WHEN DURING REPEAT DOT PRINTF READ ASSIGN SUM_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN OP_ASSIGN MOD_ASSIGN
       LEQ_THAN GEQ_THAN EQUAL NOT_EQUAL LESS_THAN GREATER_THAN AND OR NOT SUM SUB MULT DIV MOD COLON SEMICOLON COMMA 
       OPEN_CURLY_PARENTHESES CLOSE_CURLY_PARENTHESES OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_BRACKETS CLOSE_BRACKETS CONSTANT
       T_CHAR T_INT T_STRING END

%type <node> program sentence main function type arguments arg var code lines line declare assign assval value call_function call_arguments return when else during condition expression compare

/*Precedence of actions, the least important come first.*/

%left PLUS MINUS
%left MULT DIV MOD
%left EQUAL NOT_EQUAL GREATER_THAN LESS_THAN GEQ_THAN LEQ_THAN
%left AND OR 

%%

program		:	sentence														{	$$ = $1;
																		 	printTree($$);
																		}
	 	;
sentence	:	sentence function													{	$$ = newNode("sentence");
	 																		append($$, $1);
																			append($$ ,$2);
																		}
	 	|	main															{	$$ = newNode("sentence");
																			append($$, $1);
																		}
		;
main		:	T_INT MAIN OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES 			{	$$ = newNode("main");
      																			append($$, newNodeWithType(NULL, tintN));
      																			append($$, newNodeWithType(NULL, mainN));
																			append($$, newNodeWithType(NULL, opParenthesesN));
      																			append($$, newNodeWithType(NULL, clParenthesesN));
																			append($$, newNodeWithType(NULL, opCurlyN));
																			append($$, $6);
																			append($$, newNodeWithType(NULL, clCurlyN));
																		}
      		;
function	:	type ID OPEN_PARENTHESES arguments CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES		{	$$ = newNode("function");
																			append($$, $1);
																			append($$, newNodeWithType($2, idN));
																			append($$, newNodeWithType(NULL, opParenthesesN));
																			append($$, $4);
																			append($$, newNodeWithType(NULL, clParenthesesN));
																			append($$, newNodeWithType(NULL, opCurlyN));
																			append($$, $7);
																			append($$, newNodeWithType(NULL, clCurlyN));
																		}
	 	;
type		:	T_INT															{	$$ = newNodeWithType(NULL, tintN);
																		}
      		|	T_STRING														{	$$ = newNodeWithType(NULL,tstringN);
																		}
		|	T_CHAR															{	$$ = newNodeWithType(NULL, tcharN);
																		}
		;
arguments	:																{	$$ = NULL;
	  																	}
	  	|	arg															{	$$ = newNode("argumentss");
																			append($$, $1);
																		}
		;
arg		:	var COMMA arg														{	$$ = newNode("arg");
     																			append($$, $1);
     																			append($$, newNodeWithType(NULL, commaN));
																			append($$, $3);
     																		}
     		|	var															{	$$ = newNode("arg");
																			append($$, $1);
																		}
		;	
var		:	type ID															{	$$ = newNode("var");
     																			append($$, $1);
																			append($$, newNodeWithType($2, idN));
																		}
     		;
code		:																{	$$ = NULL;
      																		}
      		|	lines															{	$$ = newNode("code");
																			append($$, $1);	
																		}
		;
lines		:	line lines														{	$$ = newNode("lines");
       																			append($$, $1);
																			append($$, $2);
																		}
       		|	line															{	$$ = newNode("lines");
																			append($$, $1);	
																		}
		;
line		:	declare DOT														{	$$ = newNode("line");
      																			append($$, $1);
																			append($$, newNodeWithType(NULL, dotN));
																		}
       		|	assign DOT														{	$$ = newNode("line");
																			append($$, $1);
																			append($$, newNodeWithType(NULL, dotN));
																		}
		|	call_function DOT													{	$$ = newNode("line");
																			append($$, $1);	
																			append($$, newNodeWithType(NULL, dotN));
																		}
		|	return DOT														{	$$ = newNode("line");
																			append($$, $1);
																			append($$, newNodeWithType(NULL, dotN));
																		}
		|	END DOT															{	$$ = newNode("line");
																			append($$, newNodeWithType(NULL, endN));
																			append($$, newNodeWithType(NULL, dotN));
																		}
		|	when															{	$$ = newNode("line");
																			append($$, $1);
																		}
		|	during															{	$$ = newNode("line");
																			append($$, $1);
																		}
		;
declare		:	T_INT ID ASSIGN value													{	$$ = newNode("declare");
																			append($$, newNodeWithType(NULL, tintN));
																			append($$, newNodeWithType($2, idN));
																			append($$, newNodeWithType(NULL, assignN));
																			append($$, $4);
																		}
	 	|	type ID ASSIGN ID													{	$$ = newNode("declare");
																			append($$, $1);
																			append($$, newNodeWithType($2, idN));
																			append($$, newNodeWithType(NULL, assignN));
																			append($$, newNodeWithType($4, idN));
																		}
	 	|	T_STRING ID ASSIGN STRING												{	$$ = newNode("declare");
																			append($$, newNodeWithType(NULL, tstringN));
																			append($$, newNodeWithType($2, idN));
																			append($$, newNodeWithType(NULL, assignN));
																			append($$, newNodeWithType($4, stringN));
																		}
		|	T_STRING ID ASSIGN call_function											{	$$ = newNode("declare");
																			append($$, newNodeWithType(NULL, tstringN));
																			append($$, newNodeWithType($2, idN));
																			append($$, newNodeWithType(NULL, assignN));
																			append($$, $4);
																		}
		|	T_STRING ID ASSIGN ID													{	$$ = newNode("declare");
																			append($$, newNodeWithType(NULL, tstringN));
																			append($$, newNodeWithType($2, idN));
                                                                                                                                                        append($$, newNodeWithType(NULL, assignN));
                                                                                                                                                        append($$, newNodeWithType($4, idN));
																		}
		|	T_CHAR ID ASSIGN CHAR													{	$$ = newNode("declare");
																			append($$, newNodeWithType(NULL, tcharN));
																			append($$, newNodeWithType($2, idN));
                                                                                                                                                        append($$, newNodeWithType(NULL, assignN));
                                                                                                                                                        append($$, newNodeWithType($4, charN));
																		}	
		|	T_CHAR ID ASSIGN call_function    											{	$$ = newNode("declare");
																			append($$, newNodeWithType(NULL, tcharN));
																			append($$, newNodeWithType($2,idN));
                                                                                                                                                        append($$, newNodeWithType(NULL, assignN));
                                                                                                                                                        append($$, $4);
																		}
		|	T_CHAR ID ASSIGN ID													{	$$ = newNode("declare");
																			append($$, newNodeWithType(NULL, tcharN));
																			append($$, newNodeWithType($2,idN));
                                                                                                                                                        append($$, newNodeWithType(NULL, assignN));
                                                                                                                                                        append($$, newNodeWithType($4, idN));
																		}
		;	
assign		:	ID assval value														{	$$ = newNode("assign");
																			append($$, newNodeWithType($1, idN));
																			append($$, $2);
																			append($$, $3);
																		}
		|	ID assval STRING													{	$$ = newNode("assign");
																			append($$, newNodeWithType($1, idN));
                                                                                                                                                        append($$, $2);
                                                                                                                                                        append($$, newNodeWithType($3, stringN));
																		}
		|	ID assval CHAR														{	$$ = newNode("assign");
																			append($$, newNodeWithType($1, idN));
                                                                                                                                                        append($$, $2);
                                                                                                                                                        append($$, newNodeWithType($3, charN));
																		}
		;
assval		:	ASSIGN															{	$$ = newNodeWithType(NULL, assignN);
																		}
		|	SUM_ASSIGN														{	$$ = newNodeWithType(NULL, sumAssignN);
																		}
		|	SUB_ASSIGN														{	$$ = newNodeWithType(NULL, subAssignN);
																		}
		|	MUL_ASSIGN														{	$$ = newNodeWithType(NULL, mulAssignN);
																		}
		|	DIV_ASSIGN														{	$$ = newNodeWithType(NULL, divAssignN);
																		}
		|	OP_ASSIGN														{	$$ = newNodeWithType(NULL, opAssignN);
																		}
		|	MOD_ASSIGN														{	$$ = newNodeWithType(NULL, modAssignN);
																		}
		;
value		:	ID															{	$$ = newNodeWithType($1, idN);
       																		}
       		|	INT															{	$$ = newNodeWithType($1, intN);
																		}
		|	call_function														{	$$ = newNode("value");
																			append($$, $1);
																		}
		|	value PLUS value													{	$$ = newNode("value");
																			append($$, $1);
																			append($$, newNodeWithType(NULL, sumN));
																			append($$, $3);
																		}
		|	value MINUS value													{	$$ = newNode("value");
                                                                                                                                                        append($$, $1);
                                                                                                                                                        append($$, newNodeWithType(NULL, subN));
                                                                                                                                                        append($$, $3);
																		}
		|	value MULT value													{	$$ = newNode("value");
                                                                                                                                                        append($$, $1);
                                                                                                                                                        append($$, newNodeWithType(NULL, multN));
                                                                                                                                                        append($$, $3);
																		}
		|	value DIV value														{	$$ = newNode("value");
                                                                                                                                                        append($$, $1);
                                                                                                                                                        append($$, newNodeWithType(NULL, divN));
                                                                                                                                                        append($$, $3);
																		}
		|	value MOD value														{	$$ = newNode("value");
                                                                                                                                                        append($$, $1);
                                                                                                                                                        append($$, newNodeWithType(NULL, modN));
                                                                                                                                                        append($$, $3);
																		}
		;			
call_function	:	ID OPEN_PARENTHESES call_arguments CLOSE_PARENTHESES									{	$$ = newNode("call_function");
		      																	append($$, newNodeWithType($1, idN));
																			append($$, newNodeWithType(NULL, opParenthesesN));
																			append($$, $3);
																			append($$, newNodeWithType(NULL, clParenthesesN));	
																		} 
		|	ID OPEN_PARENTHESES CLOSE_PARENTHESES											{	$$ = newNode("call_function");
                                                                                                                                                        append($$, newNodeWithType($1, idN));
                                                                                                                                                        append($$, newNodeWithType(NULL, opParenthesesN));
                                                                                                                                                        append($$, newNodeWithType(NULL, clParenthesesN));

																		}	
		|	PRINTF OPEN_PARENTHESES call_arguments CLOSE_PARENTHESES								{	$$ = newNode("call_function");
                                                                                                                                                        append($$, newNodeWithType(NULL, printfN));
                                                                                                                                                        append($$, newNodeWithType(NULL, opParenthesesN));
                                                                                                                                                        append($$, $3);
                                                                                                                                                        append($$, newNodeWithType(NULL, clParenthesesN));
																		}
		|	READ OPEN_PARENTHESES CLOSE_PARENTHESES											{	$$ = newNode("call_function");
                                                                                                                                                        append($$, newNodeWithType(NULL, readN));
                                                                                                                                                        append($$, newNodeWithType(NULL, opParenthesesN));
                                                                                                                                                        append($$, newNodeWithType(NULL, clParenthesesN));
																		}
		;
call_arguments	:	expression														{	$$ = newNode("call_arguments");
	       																		append($$, $1);
																		}
	       	|	expression COMMA call_arguments												{	$$ = newNode("call_arguments");
																			append($$, $1);
																			append($$, newNodeWithType(NULL, commaN));
																			append($$, $3);
																		}
		;	
return		:	RETURN value														{	$$ = newNode("return");
																			append($$, newNodeWithType(NULL, returnN));
																			append($$, $2);
																		}
		|	RETURN STRING														{	$$ = newNode("return");
                                                                                                                                                        append($$, newNodeWithType(NULL, returnN));
                                                                                                                                                        append($$, newNodeWithType($2, stringN));
																		}
		|	RETURN CHAR														{	$$ = newNode("return");
                                                                                                                                                        append($$, newNodeWithType(NULL, returnN));
                                                                                                                                                        append($$, newNodeWithType($2, charN));

																		}
		;
when		:	WHEN OPEN_PARENTHESES condition CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES else		{	$$ = newNode("when");
      																			append($$, newNodeWithType(NULL, whenN));
                                                                                                                                                        append($$, newNodeWithType(NULL, opParenthesesN));
                                                                                                                                                        append($$, $3);
																			append($$, newNodeWithType(NULL, clParenthesesN));
																			append($$, newNodeWithType(NULL, opCurlyN));
																			append($$, $6);
																			append($$, newNodeWithType(NULL, clCurlyN));
																			append($$, $8);
																		}
      		;
else     	:	ELSE OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES								{	$$ = newNode("else");
	  																		append($$, newNodeWithType(NULL, elseN));
																			append($$, newNodeWithType(NULL, opCurlyN));
																			append($$, $3);
																			append($$, newNodeWithType(NULL, clCurlyN));
	  																	}
		|	ELSE WHEN OPEN_PARENTHESES condition CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES else		{	$$ = newNode("else");
																			append($$, newNodeWithType(NULL, elseN));
																			append($$, newNodeWithType(NULL, whenN));
																			append($$, newNodeWithType(NULL, opParenthesesN));
																			append($$, $4);
																			append($$, newNodeWithType(NULL, clParenthesesN));
																			append($$, newNodeWithType(NULL, opCurlyN));
																			append($$, $7);
																			append($$, newNodeWithType(NULL, clCurlyN));
																			append($$, $9);
																		}
		|																{	$$ = NULL;
																		}
		;
during		:	REPEAT OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES DURING OPEN_PARENTHESES condition CLOSE_PARENTHESES DOT	{	$$ = newNode("during");
																			append($$, newNodeWithType(NULL, repeatN));
																			append($$, newNodeWithType(NULL, opCurlyN));
																			append($$, $3);
																			append($$, newNodeWithType(NULL, clCurlyN));
																			append($$, newNodeWithType(NULL, duringN));
																			append($$, newNodeWithType(NULL, opParenthesesN));
																			append($$, $7);
																			append($$, newNodeWithType(NULL, clParenthesesN));
																			append($$, newNodeWithType(NULL, dotN));
																		}
		|	DURING OPEN_PARENTHESES condition CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES			{	$$ = newNode("during");
																			append($$, newNodeWithType(NULL, duringN));
																			append($$, newNodeWithType(NULL, opParenthesesN));
																			append($$, $3);
																			append($$, newNodeWithType(NULL, clParenthesesN));
																			append($$, newNodeWithType(NULL, opCurlyN));
																			append($$, $6);
																			append($$, newNodeWithType(NULL, clCurlyN));
																		}
		;
condition	:	expression														{	$$ = newNode("condition");
	  																		append($$, $1);
																		}
	  	|	OPEN_PARENTHESES condition AND condition CLOSE_PARENTHESES								{	$$ = newNode("condition");
																			append($$, newNodeWithType(NULL, opParenthesesN));	
																			append($$, $2);
																			append($$, newNodeWithType(NULL, andN));
																			append($$, $4);
																			append($$, newNodeWithType(NULL, clParenthesesN));
																		}
		|	OPEN_PARENTHESES condition OR condition	CLOSE_PARENTHESES								{	$$ = newNode("condition");
																			append($$, newNodeWithType(NULL, opParenthesesN));
																			append($$, $2);
																			append($$, newNodeWithType(NULL, orN));
																			append($$, $4);
																			append($$, newNodeWithType(NULL, clParenthesesN));
																		}
		|	NOT condition														{	$$ = newNode("condition");
																			append($$, newNodeWithType(NULL, notN));
																			append($$, $2);
																		}
		;
expression	:	call_function														{	$$ = newNode("expression");
	   																		append($$, $1);
																		}
	   	|	INT															{	$$ = newNodeWithType($1, intN);
																		}
		|	STRING															{ 	$$ = newNodeWithType($1, stringN);
																		}
		|	ID															{	$$ = newNodeWithType($1, idN);
																		}
		|	value compare value													{	$$ = newNode("expressopn");
																			append($$,$1);
																			append($$,$2);
																			append($$,$3);
																		}
		;	
compare		:	EQUAL															{	$$ = newNodeWithType(NULL, equalN);	
																		}
	 	|	NOT_EQUAL														{	$$ = newNodeWithType(NULL, notEqualN);
																		}
		|	LEQ_THAN														{	$$ = newNodeWithType(NULL, leqN);
																		}
		|	GEQ_THAN														{	$$ = newNodeWithType(NULL, geqN);
																		}	
		|	LESS_THAN														{	$$ = newNodeWithType(NULL, lessN);
																		}
		|	GREATER_THAN														{	$$ = newNodeWithType(NULL, greaterN);
																		}
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
