#!/bin/bash
yacc -d yacc.y && lex lex.l && gcc -o compiler lex.yy.c y.tab.c

