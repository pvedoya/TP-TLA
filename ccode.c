#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int power ( int a , int b ) ;
 int main ( ) {
 printf ( "The answer to 3^4 is %d\n" , power ( 3 , 4 ) ) ;
 }
 int power ( int a , int b ) {
 if ( b == 1 ) {
 return a ;
 }
 return a * power ( a , b - 1 ) ;
 }
 