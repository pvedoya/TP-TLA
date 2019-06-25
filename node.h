#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>

typedef enum tokens{
        mainN, elseN, returnN, whenN, duringN, repeatN, dotN, printfN, readN, assignN, sumAssignN,
        subAssignN, mulAssignN, divAssignN, opAssignN, modAssignN, leqN, geqN, equalN, notEqualN, lessN, greaterN,
        andN, orN, notN, sumN, subN, multN, divN, modN, colonN, semicolonN, commaN, opCurlyN, clCurlyN,
        opParenthesesN, clParenthesesN, opBracketsN, clBracketsN, tintN, tstringN, tcharN, intN, stringN, charN, idN, endN,

        rootN, middleN
} token;

static char * tokens[100] = {"main", "else", "return", "if", "while", "do",";\n", "printf", "getchar", "=", "+=", "-=", "*=", "/=", "=(-1)*","%=","<=",">=","==","!=","<",">","&&","||","!=",
                                "+","-","*","/","%",":",";",",","{\n","}\n","(",")","[","]","int","char *","char", "", "", "", "","exit()","rootN","middleN"};


//Implementation based on Chu0kupai n-ary node implementation from github

typedef struct Node Node;
struct Node{
	token token;
	char * value;
	
	Node * next;
	Node * prev;
	Node * parent;
	Node * children;
};

//Return node

Node * newNode(char * value); 

Node * newNodeWithType(char * value, token token);

#define append(parent, node)  insertBefore((Node *)parent, NULL, (Node *)node)

Node * insertBefore(Node * parent, Node * sibling, Node * node);

#define nodeIsRoot(node)  (! ((Node *)(node))->parent && ! ((Node *)(node))->next)

Node * root(Node * node);

Node * find(Node * node, void * value, int (* compare)(void * a, void * b));

Node * nthChild(Node * node, int n);

//Dont return Node

void printTree(Node * node);

int total(Node * root);

void unlink(Node * node);

void destroy(Node * root);

int childrenQuantity(Node * node);

void nodeFree(Node * node);

#endif

