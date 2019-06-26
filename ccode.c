int go = 2 ;
 char * ber = "fadf" ;
 int main ( ) {
 printf ( "VARIABLES GLOBALES, 1:%d, 2:%s\n" , go , ber ) ;
 char caracter = 'f' ;
 int hola = 23 ;
 hola += 3 ;
 hola -= 4 ;
 int adios = hola ;
 hola = hola * 2 ;
 printf ( "hola :%d adios: %d\n" , hola , adios ) ;
 char * texto = "ejempli" ;
 printf ( "%s\n" , texto ) ;
 char c = getchar ( ) ;
 printf ( "%c\n" , c ) ;
 int i = 0 ;
 int j = 1 ;
 if ( i == 0 ) {
 printf ( "CASO 1: ACA SI\n" ) ;
 }
 else {
 printf ( "ACA NO\n" ) ;
 }
 if ( j > 0 ) {
 printf ( "CASO 2: ACA SI\n" ) ;
 }
 else if ( j == 0 ) {
 printf ( "CASO 2 ACA NO\n" ) ;
 }
 else {
 printf ( "ACA MENOS\n" ) ;
 }
 while ( i <= 5 ) {
 printf ( " Ciclo %d, letra %c\n" , i , c ) ;
 i += 1 ;
 }
 }
 
