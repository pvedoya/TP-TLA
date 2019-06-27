#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ( ) {
 printf ( "We will use four num variables, two of them 0 and 1 (representing true and false), the other will be user input\n" ) ;
 int true = 1 ;
 int false = 0 ;
 int num1 = 0 ;
 int num2 = 0 ;
 int aux = 0 ;
 printf ( "Enter first number: (default is 0)\n" ) ;
 char c = getchar ( ) ;
 while ( c != '\n' ) {
 if ( ( c > '9' || c < '0' ) ) {
 printf ( "You must input a number!" ) ;
 exit(0) ;
 }
 aux = c - '0' ;
 num1 = num1 * 10 + aux ;
 c = getchar ( ) ;
 }
 printf ( "Enter second number: (defaukt is 0)\n" ) ;
 c = getchar ( ) ;
 do {
 if ( ( c > '9' || c < '0' ) ) {
 printf ( "You must input a number!" ) ;
 exit(0) ;
 }
 aux = c - '0' ;
 num2 = num2 * 10 + aux ;
 c = getchar ( ) ;
 }
 while ( c != '\n' ) ;
 printf ( "Your numbers: %d and %d" , num1 , num2 ) ;
 }
 