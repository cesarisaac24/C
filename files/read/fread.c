/*size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );

Esta función lee un bloque de una "stream" de datos. 
Efectúa la lectura de un arreglo de elementos "count", cada uno de los cuales tiene un tamaño definido por "size". Luego los guarda en el bloque de memoria especificado por "ptr". El indicador de posición de la cadena de caracteres avanza hasta leer la totalidad de bytes..


PARAMETROS:
ptr : Puntero a un bloque de memoria con un tamaño mínimo de (size*count) bytes.
size : Tamaño en bytes de cada elemento (de los que voy a leer).
count : Número de elementos.
stream: Puntero a objetos FILE, que especifica la cadena de entrada.
 *
 * */
#include<stdio.h>
#include<stdlib.h>

       int main ()
 {
       	FILE *archivo;
       	char caracteres[100];
       	archivo = fopen("hola.txt""a");
       	
       	if (archivo == null)
       	exit(0);
       	else
	   
	   {
	   	fprint(archivo, "%s%s\n","hola mundo despiado", nombre);
	   	puts ("escribiendo...");
	   }
	   getchar();
	   fclose(archivo);
	   retunr(0);
}
