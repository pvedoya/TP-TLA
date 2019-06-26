#!/bin/bash
if [ $1 == *.sim ]
then
	./parser < $1 > ccode.c
	gcc -Wall -pedantic -std=c99 -o program ccode.c
	echo To run the program, execute ./program
else
	echo File must have a .sim extension
fi
