num go = -2.
str ber = "fadf".

num main(){
	dec decimal = 3.2.
	dec deccimal = -323.2123.
	printf("%g  %g\n", decimal, deccimal).



	printf("VARIABLES GLOBALES, 1:%d, 2:%s\n", go, ber).

	var caracter = 'f'.
	var number = '0'.

	printf("numero: %c caracter: %c\n",number,caracter).

	num hola = 23.
        hola +=3.
        hola -=4.

        num adios = hola.
        hola = hola * 2.
        printf("hola :%d adios: %d\n",hola, adios).

        str texto = "ejempli".
        printf("%s\n",texto).

        var c = read().
        printf("%c\n",c).

        num i = 0.
        num j = 1.
        when(i == 0){
                printf("CASO 1: ACA SI\n").
        }
        else{
                printf("ACA NO\n").
        }

        when( j> 0){
                printf("CASO 2: ACA SI\n").
        }else when(j==0){
                printf("CASO 2 ACA NO\n").
        }else{
                printf("ACA MENOS\n").
        }

	during(i <= 5) {
                printf(" Ciclo %d, letra %c\n", i, c).
        	i+=1.
	}			

}
