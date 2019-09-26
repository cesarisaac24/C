#include <stdio.h>

void saludo(void)
{
 	printf("Hola Mundo\n"); /* imprime la cadena */
	return; /* sale de la funcion */
}
 
int main(void) /* Funcion principal del programa */
{
	int x;
	for(x=1; x<=50; x++){
	printf("%d: ", x );
	saludo ();
	return 0;
	}
	saludo(); /* llamada a la funcion saludo*/
	return 0; /* sale del programa con codigo 0 (correcto) */
}
