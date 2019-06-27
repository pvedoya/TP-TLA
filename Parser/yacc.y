%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#include <string.h>
	#include "../node.h"

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

%token <string> ID STRING INT CHAR DECIMAL

%token MAIN ELSE RETURN WHEN DURING REPEAT DOT PRINTF READ ASSIGN SUM_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN OP_ASSIGN MOD_ASSIGN
       LEQ_THAN GEQ_THAN EQUAL NOT_EQUAL LESS_THAN GREATER_THAN AND OR NOT SUM SUB MULT DIV MOD COLON SEMICOLON COMMA
       OPEN_CURLY_PARENTHESES CLOSE_CURLY_PARENTHESES OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_BRACKETS CLOSE_BRACKETS CONSTANT
       T_CHAR T_INT T_STRING T_DECIMAL T_VOID CONSTANT END

%type <node> program sentence global main function type arguments arg var code lines line declare assign assval value call_function call_arguments return when else during condition expression compare

/*Precedence of actions, the least important come first.*/

%left SUM SUB
%left MULT DIV MOD
%left EQUAL NOT_EQUAL GREATER_THAN LESS_THAN GEQ_THAN LEQ_THAN
%left AND OR

%%

program		:	sentence														{	$$ = $1;;
	 																		printHeaders();
																		 	printTree($$);
																		}
	 	;
sentence	:	sentence function													{	$$ = newNode("sentence");
	 																		append($$, $1);
	 																		append($$, $2);
																		}
	 	|	global 															{	$$ = newNode("sentence");
																			append($$, $1);
																		}
		;
global		:	type ID OPEN_PARENTHESES arguments CLOSE_PARENTHESES DOT global								{	$$ = newNode("global");
																			append($$, $1);
																			append($$, newNodeWithValue($2, idN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, opParenthesesN));
                                                                                                                                                        append($$, $4);
                                                                                                                                                        append($$, newNodeWithValue(NULL, clParenthesesN));
																			append($$, newNodeWithValue(NULL, dotN));
																			append($$, $7);
																		}
		|	main															{	$$ = newNode("global");
																			append($$, $1);
																		}
		;
main		:	T_INT MAIN OPEN_PARENTHESES CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES 			{	$$ = newNode("main");
      																			append($$, newNodeWithValue(NULL, tintN));
      																			append($$, newNodeWithValue(NULL, mainN));
																			append($$, newNodeWithValue(NULL, opParenthesesN));
      																			append($$, newNodeWithValue(NULL, clParenthesesN));
																			append($$, newNodeWithValue(NULL, opCurlyN));
																			append($$, $6);
																			append($$, newNodeWithValue(NULL, clCurlyN));
																		}
      		;
function	:	type ID OPEN_PARENTHESES arguments CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES		{	$$ = newNode("function");
																			append($$, $1);
																			append($$, newNodeWithValue($2, idN));
																			append($$, newNodeWithValue(NULL, opParenthesesN));
																			append($$, $4);
																			append($$, newNodeWithValue(NULL, clParenthesesN));
																			append($$, newNodeWithValue(NULL, opCurlyN));
																			append($$, $7);
																			append($$, newNodeWithValue(NULL, clCurlyN));
																		}
	 	;
type		:	T_INT															{	$$ = newNodeWithValue(NULL, tintN);
																		}
      		|	T_STRING														{	$$ = newNodeWithValue(NULL,tstringN);
																		}
		|	T_CHAR															{	$$ = newNodeWithValue(NULL, tcharN);
																		}
		|	T_DECIMAL														{	$$ = newNodeWithValue(NULL, tdecimalN);
																		}
		|	T_VOID															{	$$ = newNodeWithValue(NULL, tvoidN);
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
     																			append($$, newNodeWithValue(NULL, commaN));
																			append($$, $3);
     																		}
     		|	var															{	$$ = newNode("arg");
																			append($$, $1);
																		}
		;
var		:	type ID															{	$$ = newNode("var");
     																			append($$, $1);
																			append($$, newNodeWithValue($2, idN));
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
																			append($$, newNodeWithValue(NULL, dotN));
																		}
       		|	assign DOT														{	$$ = newNode("line");
																			append($$, $1);
																			append($$, newNodeWithValue(NULL, dotN));
																		}
		|	call_function DOT													{	$$ = newNode("line");
																			append($$, $1);
																			append($$, newNodeWithValue(NULL, dotN));
																		}
		|	return DOT														{	$$ = newNode("line");
																			append($$, $1);
																			append($$, newNodeWithValue(NULL, dotN));
																		}
		|	END DOT															{	$$ = newNode("line");
																			append($$, newNodeWithValue(NULL, endN));
																			append($$, newNodeWithValue(NULL, dotN));
																		}
		|	when															{	$$ = newNode("line");
																			append($$, $1);
																		}
		|	during															{	$$ = newNode("line");
																			append($$, $1);
																		}
		;
declare		:	type ID															{	$$ = newNode("declare");
																			append($$, $1);
																			append($$, newNodeWithValue($2, idN));
																		}
 		| 	type CONSTANT ID ASSIGN value												{	$$ = newNode("declare");
																			append($$, $1);
                                                                                                                                                        append($$, newNodeWithValue(NULL, constantN));
                                                                                                                                                        append($$, newNodeWithValue($3, idN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, assignN));
                                                                                                                                                        append($$, $5);

																		}
		|	type CONSTANT ID ASSIGN STRING												{	$$ = newNode("declare");
                                                                                                                                                        append($$, $1);
                                                                                                                                                        append($$, newNodeWithValue(NULL, constantN));
                                                                                                                                                        append($$, newNodeWithValue($3, idN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, assignN));
                                                                                                                                                        append($$, newNodeWithValue($5,stringN));
																		}
		|	T_INT ID ASSIGN value													{	$$ = newNode("declare");
																			append($$, newNodeWithValue(NULL, tintN));
																			append($$, newNodeWithValue($2, idN));
																			append($$, newNodeWithValue(NULL, assignN));
																			append($$, $4);
																		}
	 	|	type ID ASSIGN ID													{	$$ = newNode("declare");
																			append($$, $1);
																			append($$, newNodeWithValue($2, idN));
																			append($$, newNodeWithValue(NULL, assignN));
																			append($$, newNodeWithValue($4, idN));
																		}
		|	T_DECIMAL ID ASSIGN value												{	$$ = newNode("declare");
																			append($$, newNodeWithValue(NULL, tdecimalN));
																			append($$, newNodeWithValue($2, idN));
																			append($$, newNodeWithValue(NULL, assignN));
																			append($$, $4);
																		}
	 	|	T_STRING ID ASSIGN STRING												{	$$ = newNode("declare");
																			append($$, newNodeWithValue(NULL, tstringN));
																			append($$, newNodeWithValue($2, idN));
																			append($$, newNodeWithValue(NULL, assignN));
																			append($$, newNodeWithValue($4, stringN));
																		}
		|	T_STRING ID ASSIGN call_function											{	$$ = newNode("declare");
																			append($$, newNodeWithValue(NULL, tstringN));
																			append($$, newNodeWithValue($2, idN));
																			append($$, newNodeWithValue(NULL, assignN));
																			append($$, $4);
																		}
		|	T_STRING ID ASSIGN ID													{	$$ = newNode("declare");
																			append($$, newNodeWithValue(NULL, tstringN));
																			append($$, newNodeWithValue($2, idN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, assignN));
                                                                                                                                                        append($$, newNodeWithValue($4, idN));
																		}
		|	T_CHAR ID ASSIGN CHAR													{	$$ = newNode("declare");
																			append($$, newNodeWithValue(NULL, tcharN));
																			append($$, newNodeWithValue($2, idN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, assignN));
																			append($$, newNodeWithValue($4, charN));
																		}
		|	T_CHAR ID ASSIGN call_function    											{	$$ = newNode("declare");
																			append($$, newNodeWithValue(NULL, tcharN));
																			append($$, newNodeWithValue($2,idN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, assignN));
                                                                                                                                                        append($$, $4);
																		}
		|	T_CHAR ID ASSIGN ID													{	$$ = newNode("declare");
																			append($$, newNodeWithValue(NULL, tcharN));
																			append($$, newNodeWithValue($2,idN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, assignN));
                                                                                                                                                        append($$, newNodeWithValue($4, idN));
																		}
		;
assign		:	ID assval value														{	$$ = newNode("assign");
																			append($$, newNodeWithValue($1, idN));
																			append($$, $2);
																			append($$, $3);
																		}
		|	ID assval STRING													{	$$ = newNode("assign");
																			append($$, newNodeWithValue($1, idN));
                                                                                                                                                        append($$, $2);
                                                                                                                                                        append($$, newNodeWithValue($3, stringN));
																		}
		|	ID assval CHAR														{	$$ = newNode("assign");
																			append($$, newNodeWithValue($1, idN));
                                                                                                                                                        append($$, $2);
                                                                                                                                                        append($$, newNodeWithValue($3, charN));
																		}
		;
assval		:	ASSIGN															{	$$ = newNodeWithValue(NULL, assignN);
																		}
		|	SUM_ASSIGN														{	$$ = newNodeWithValue(NULL, sumAssignN);
																		}
		|	SUB_ASSIGN														{	$$ = newNodeWithValue(NULL, subAssignN);
																		}
		|	MUL_ASSIGN														{	$$ = newNodeWithValue(NULL, mulAssignN);
																		}
		|	DIV_ASSIGN														{	$$ = newNodeWithValue(NULL, divAssignN);
																		}
		|	OP_ASSIGN														{	$$ = newNodeWithValue(NULL, opAssignN);
																		}
		|	MOD_ASSIGN														{	$$ = newNodeWithValue(NULL, modAssignN);
																		}
		;
value		:	ID															{	$$ = newNodeWithValue($1, idN);
       																		}
       		|	INT															{	$$ = newNodeWithValue($1, intN);
																		}
		|	DECIMAL															{	$$ = newNodeWithValue($1, decimalN);
																		}
		|	CHAR															{	$$ = newNodeWithValue($1, charN);
																		}
		|	call_function														{	$$ = newNode("value");
																			append($$, $1);
																		}
		|	value SUM value														{	$$ = newNode("value");
																			append($$, $1);
																			append($$, newNodeWithValue(NULL, sumN));
																			append($$, $3);
																		}
		|	value SUB value														{	$$ = newNode("value");
                                                                                                                                                        append($$, $1);
                                                                                                                                                        append($$, newNodeWithValue(NULL, subN));
                                                                                                                                                        append($$, $3);
																		}
		|	value MULT value													{	$$ = newNode("value");
                                                                                                                                                        append($$, $1);
                                                                                                                                                        append($$, newNodeWithValue(NULL, multN));
                                                                                                                                                        append($$, $3);
																		}
		|	value DIV value														{	$$ = newNode("value");
                                                                                                                                                        append($$, $1);
                                                                                                                                                        append($$, newNodeWithValue(NULL, divN));
                                                                                                                                                        append($$, $3);
																		}
		|	value MOD value														{	$$ = newNode("value");
                                                                                                                                                        append($$, $1);
                                                                                                                                                        append($$, newNodeWithValue(NULL, modN));
                                                                                                                                                        append($$, $3);
																		}
		;
call_function	:	ID OPEN_PARENTHESES call_arguments CLOSE_PARENTHESES									{	$$ = newNode("call_function");
		      																	append($$, newNodeWithValue($1, idN));
																			append($$, newNodeWithValue(NULL, opParenthesesN));
																			append($$, $3);
																			append($$, newNodeWithValue(NULL, clParenthesesN));
																		}
		|	ID OPEN_PARENTHESES CLOSE_PARENTHESES											{	$$ = newNode("call_function");
                                                                                                                                                        append($$, newNodeWithValue($1, idN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, opParenthesesN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, clParenthesesN));

																		}
		|	PRINTF OPEN_PARENTHESES call_arguments CLOSE_PARENTHESES								{	$$ = newNode("call_function");
                                                                                                                                                        append($$, newNodeWithValue(NULL, printfN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, opParenthesesN));
                                                                                                                                                        append($$, $3);
                                                                                                                                                        append($$, newNodeWithValue(NULL, clParenthesesN));
																		}
		|	READ OPEN_PARENTHESES CLOSE_PARENTHESES											{	$$ = newNode("call_function");
                                                                                                                                                        append($$, newNodeWithValue(NULL, readN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, opParenthesesN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, clParenthesesN));
																		}
		;
call_arguments	:	expression														{	$$ = newNode("call_arguments");
	       																		append($$, $1);
																		}
	       	|	expression COMMA call_arguments												{	$$ = newNode("call_arguments");
																			append($$, $1);
																			append($$, newNodeWithValue(NULL, commaN));
																			append($$, $3);
																		}
		;
return		:	RETURN value														{	$$ = newNode("return");
																			append($$, newNodeWithValue(NULL, returnN));
																			append($$, $2);
																		}
		|	RETURN STRING														{	$$ = newNode("return");
                                                                                                                                                        append($$, newNodeWithValue(NULL, returnN));
                                                                                                                                                        append($$, newNodeWithValue($2, stringN));
																		}
		|	RETURN															{	$$ = newNode("return");
																			append($$, newNodeWithValue(NULL, returnN));

																		}

when		:	WHEN OPEN_PARENTHESES condition CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES else		{	$$ = newNode("when");
      																			append($$, newNodeWithValue(NULL, whenN));
                                                                                                                                                        append($$, newNodeWithValue(NULL, opParenthesesN));
                                                                                                                                                        append($$, $3);
																			append($$, newNodeWithValue(NULL, clParenthesesN));
																			append($$, newNodeWithValue(NULL, opCurlyN));
																			append($$, $6);
																			append($$, newNodeWithValue(NULL, clCurlyN));
																			append($$, $8);
																		}
      		;
else     	:	ELSE OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES								{	$$ = newNode("else");
	  																		append($$, newNodeWithValue(NULL, elseN));
																			append($$, newNodeWithValue(NULL, opCurlyN));
																			append($$, $3);
																			append($$, newNodeWithValue(NULL, clCurlyN));
	  																	}
		|	ELSE WHEN OPEN_PARENTHESES condition CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES else		{	$$ = newNode("else");
																			append($$, newNodeWithValue(NULL, elseN));
																			append($$, newNodeWithValue(NULL, whenN));
																			append($$, newNodeWithValue(NULL, opParenthesesN));
																			append($$, $4);
																			append($$, newNodeWithValue(NULL, clParenthesesN));
																			append($$, newNodeWithValue(NULL, opCurlyN));
																			append($$, $7);
																			append($$, newNodeWithValue(NULL, clCurlyN));
																			append($$, $9);
																		}
		|																{	$$ = NULL;
																		}
		;
during		:	REPEAT OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES DURING OPEN_PARENTHESES condition CLOSE_PARENTHESES DOT	{	$$ = newNode("during");
																			append($$, newNodeWithValue(NULL, repeatN));
																			append($$, newNodeWithValue(NULL, opCurlyN));
																			append($$, $3);
																			append($$, newNodeWithValue(NULL, clCurlyN));
																			append($$, newNodeWithValue(NULL, duringN));
																			append($$, newNodeWithValue(NULL, opParenthesesN));
																			append($$, $7);
																			append($$, newNodeWithValue(NULL, clParenthesesN));
																			append($$, newNodeWithValue(NULL, dotN));
																		}
		|	DURING OPEN_PARENTHESES condition CLOSE_PARENTHESES OPEN_CURLY_PARENTHESES code CLOSE_CURLY_PARENTHESES			{	$$ = newNode("during");
																			append($$, newNodeWithValue(NULL, duringN));
																			append($$, newNodeWithValue(NULL, opParenthesesN));
																			append($$, $3);
																			append($$, newNodeWithValue(NULL, clParenthesesN));
																			append($$, newNodeWithValue(NULL, opCurlyN));
																			append($$, $6);
																			append($$, newNodeWithValue(NULL, clCurlyN));
																		}
		;
condition	:	expression														{	$$ = newNode("condition");
	  																		append($$, $1);
																		}
	  	|	OPEN_PARENTHESES condition AND condition CLOSE_PARENTHESES								{	$$ = newNode("condition");
																			append($$, newNodeWithValue(NULL, opParenthesesN));
																			append($$, $2);
																			append($$, newNodeWithValue(NULL, andN));
																			append($$, $4);
																			append($$, newNodeWithValue(NULL, clParenthesesN));
																		}
		|	OPEN_PARENTHESES condition OR condition	CLOSE_PARENTHESES								{	$$ = newNode("condition");
																			append($$, newNodeWithValue(NULL, opParenthesesN));
																			append($$, $2);
																			append($$, newNodeWithValue(NULL, orN));
																			append($$, $4);
																			append($$, newNodeWithValue(NULL, clParenthesesN));
																		}
		|	NOT condition														{	$$ = newNode("condition");
																			append($$, newNodeWithValue(NULL, notN));
																			append($$, $2);
																		}
		;
expression	:	call_function														{	$$ = newNode("expression");
	   																		append($$, $1);
																		}
	   	|	INT															{	$$ = newNodeWithValue($1, intN);
																		}
		|	STRING															{ 	$$ = newNodeWithValue($1, stringN);
																		}
		|	ID															{	$$ = newNodeWithValue($1, idN);
																		}
		|	value compare value													{	$$ = newNode("expression");
																			append($$,$1);
																			append($$,$2);
																			append($$,$3);
																		}
		|	value															{	$$ = newNode("expression");
																			append($$, $1);
																		}
		;
compare		:	EQUAL															{	$$ = newNodeWithValue(NULL, equalN);
																		}
	 	|	NOT_EQUAL														{	$$ = newNodeWithValue(NULL, notEqualN);
																		}
		|	LEQ_THAN														{	$$ = newNodeWithValue(NULL, leqN);
																		}
		|	GEQ_THAN														{	$$ = newNodeWithValue(NULL, geqN);
																		}
		|	LESS_THAN														{	$$ = newNodeWithValue(NULL, lessN);
																		}
		|	GREATER_THAN														{	$$ = newNodeWithValue(NULL, greaterN);
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
