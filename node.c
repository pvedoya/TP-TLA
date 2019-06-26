#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"


Node * newNodeWithType(char * value, token token){
        Node * node = (Node *) malloc(sizeof(Node));

	if(node == NULL){
		return node;
	}

	node->token = token;
	node->value = value;

	node->next = NULL;
	node->prev = NULL;
	node->parent = NULL;
	node->children = NULL;

	return node;
}

Node * newNode(char * value){
        Node * node = newNodeWithType(value, middleN);
        return node;
}


Node * insertBefore(Node * parent, Node * sibling, Node * node){
	if (! (parent && node) || (sibling && sibling->parent == parent)){return NULL;}
 	node->parent = parent;
  	if (sibling){
    		if (sibling->prev){
      			node->prev = sibling->prev;
      			node->prev->next = node;
    		}
    		else
      			node->parent->children = node;
    		node->next = sibling;
    		sibling->prev = node;
  	}
  	else{
    		if (parent->children){
     			sibling = parent->children;
      			while (sibling->next)
        			sibling = sibling->next;
      			node->prev = sibling;
      			sibling->next = node;
    		}
    		else
      			node->parent->children = node;
  	}
  	return node;
}


Node * root(Node * node){
	if(!node){
		return NULL;
	}
	if(node->parent){
		return root(node->parent);
	}
	return node;
}


Node * find(Node * node, void * value, int(*compare)(void * a, void * b)){
	if(!node){
		return node;
	}
	if (! compare(value, node->value)){
	    	return node;
	}
  	if (node->next){
		return find(node->next, value, compare);
  	}
	if (node->children){
    		return find(node->children, value, compare);
	}
	return NULL;
}


Node * nthChild(Node * node, int n){
	if(!node) {return NULL;}
	node = node->children;
	while(node && (n-- > 0)){
		node = node->next;
	}
	return node;
}

void printTree(Node * node){
	if(node == NULL){
		printf("ERROR 1\n");
		return;
	}
	if(node->token != middleN){
		if(node->token != intN && node->token != stringN && node->token != idN && node->token != charN && node->token != decimalN) {
     	 		node->value = tokens[node->token];
    		}
		if(node->value == NULL){
      			printf( "ERROR 2\n");
     			 return;
    		}

    	printf("%s ", node->value );
    
   	 return;

  	}	

  	if(node->token == middleN){

    		if(node->children == NULL){
      			printf("ERROR 3\n");
      			return;
    		}

    		Node * aux = node->children;

    		while(aux != NULL){
      			printTree(aux);
      			aux = aux->next;
    		}
  	}
}

void printHeaders(){
	printf("#include <stdio.h>\n\n");
}

int total(Node * root){
	if (! root){
		return 0;
	}
  	int n;
  
  	n = 1;
  	if (root->children){
    		n += total(root->children);
	}
	if (root->next){
    		n += total(root->next);
	}
  	return n;
}

void unlink(Node * node){
	if (! node){
		return;
	}
  	if (node->prev){
    		node->prev->next = node->next;
  	}else if (node->parent){
    		node->parent->children = node->next;
  	}
	if (node->next){
    		node->next->prev = node->prev;
    		node->next = NULL;
  	}
  	node->prev = NULL;
  	node->parent = NULL;
}

void destroy(Node * root){
	if (! root){
    		return;
	}
  	if (! nodeIsRoot(root)){
    		unlink(root);
	}
  	nodeFree(root);
}

void nodeFree(Node *node){
  	if (! node){
    		return;
  	}
	if (node->children){
    		nodeFree(node->children);
  	}
	if (node->next){
    		nodeFree(node->next);
  	}
	free(node);
}


int childrenQuantity(Node * node){
	int n = 0;
  	Node * aux = node->children;
  	while(aux != NULL){
  		aux = aux->next;
  		n++;
  	}
  	return n;
}
