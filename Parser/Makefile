all:
	yacc -d yacc.y
	lex lex.l
	gcc -o parser y.tab.c lex.yy.c ../node.c

clean:
	rm parser lex.yy.c y.tab.c y.tab.h

