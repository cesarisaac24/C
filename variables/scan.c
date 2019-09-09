#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades

int num_cuenta;
char nombre[10];
float cal1, cal2, cal3;



int main()
{
 // Inicio
 printf("Ingrese numero de cuenta:");
 scanf("%d",&num_cuenta);
 printf("Ingrese nombre:");
 scanf("%s",nombre);


 //Promedio
 printf("calificacion de info 1:");
 scanf("%f",&cal1);
 printf("calificacion de conta 1:");
 scanf("%f",&cal2);
 printf("calificacion de info 1:");
 scanf("%f",&cal3);
 promedio=(cal1+cal2+cal3/3);
 
 printf("Alumno : %d %s %f \n",num_cuenta,nombre,promedio);
 return 0;
 //imprime el registro
 // Fin de programa

}


