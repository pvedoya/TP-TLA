#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>

typedef enum tokens{
        mainN, elseN, returnN, whenN, duringN, repeatN, dotN, printfN, readN, assignN, sumAssignN,
        subAssignN, mulAssignN, divAssignN, opAssignN, modAssignN, leqN, geqN, equalN, notEqualN, lessN, greaterN,
        andN, orN, notN, sumN, subN, multN, divN, modN, colonN, semicolonN, commaN, opCurlyN, clCurlyN,
        opParenthesesN, clParenthesesN, opBracketsN, clBracketsN, tintN, tstringN, tcharN, tdecimalN, tvoidN, intN, stringN, charN, idN, decimalN, constantN, endN,

        rootN, middleN
} token;

//This array contains what the tokens represent in c, accessed when printing the tree

static char * tokens[100] = {"main", "else", "return", "if", "while", "do",";\n", "printf", "getchar", "=", "+=", "-=", "*=", "/=", "=(-1)*","%=","<=",">=","==","!=","<",">","&&","||","!=",
                                "+","-","*","/","%",":",";",",","{\n","}\n","(",")","[","]","int","char *","char", "float", "void", "", "", "", "", "", "const","exit(0)","rootN","middleN"};


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

//Returns a new node without a token

Node * newNode(char * value); 

//Returns a new node with an assigned token, it can have a value ir it is an id, char, string, int or decimal 

Node * newNodeWithValue(char * value, token token);

//The next two functions work together to add a node as a child to another(parent)

#define append(parent, node)  insertBefore((Node *)parent, NULL, (Node *)node)

Node * insertBefore(Node * parent, Node * sibling, Node * node);

//The following two functions work together toreturn the root of the current node

#define nodeIsRoot(node)  (! ((Node *)(node))->parent && ! ((Node *)(node))->next)

Node * root(Node * node);

//Returns a node if the node exists in the given tree ("node" parameter) 

Node * find(Node * node, void * value, int (* compare)(void * a, void * b));

//Given a value n, it returns the child number n of a node

Node * nthChild(Node * node, int n);

//Prints the tree in c, using the tokens and the values array

void printTree(Node * node);

//Prints the headers of the program with needed libraries for printf and getchar

void printHeaders();

//Returns ammount of children and next nodes the root has

int total(Node * root);

//Separates a node from others

void unlink(Node * node);

//Calls nodeFree to eliminate a node

void destroy(Node * root);

//Returns ammount of children of given node

int childrenQuantity(Node * node);

//Frees a node

void nodeFree(Node * node);

#endif

