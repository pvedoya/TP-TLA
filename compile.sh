#!/bin/bash
./Parser/parser < $1 > ccode.c
gcc -Wall -pedantic -std=c99 -o $2 ccode.c
echo To run the program, execute ./$2

