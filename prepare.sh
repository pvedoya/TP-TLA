#!/bin/bash
yacc -d yacc.y && lex lex.l && gcc -o compiler y.tab.c lex.yy.c node.c
./compiler < $1 > ccode.c
gcc -Wall -pedantic -std=c99 -o program ccode.c
rm compiler lex.yy.c y.tab.c y.tab.h

