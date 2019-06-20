#ifndef NODE_H
#define NODE_H

typedef enum tokens
{
	mainN, elseN, returnN, whenN, doN, repeatN, dotN, printfN, readN, assignN, sumAssignN, 
	subAssignN, mulAssignN, divAssignN, opAssignN, modAssignN, leqN, geqN, equalN, notEqualN, lessN, greaterN,
	andN, orN, notN, sumN, subN, multN, divN, modN, colonN, semicolonN, commaN, opCurlyN, clCurlyN,
	opParenthesesN, clParenthesesN, opBrackets, clBrackets, intN, stringN, charN, endN,
	       
	rootN,
} token;

static char * cTokens[225] = {"main", "else", "return", "if", "do", "while",";", "printf", "getchar", "=", "+=", "-=", "*=", "/=", "=(-1)*","%=","<=",">=","==","!=","<",">","&&","||","!=",
				"+","-","*","/","%",":",";",",","{","}","(",")","[","]","int","char *","char","exit();"};






#endif
