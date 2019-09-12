#include<stdio.h>
#include<stdlib.h>
int main()
{
	int opcion, a, b, c;
	printf("Dame un numero:\n");
	scanf("%d",&a);
	printf("Dame un segundo2 numero:\n");
	scanf("%d",&b);
	printf("Elige una opcion:");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion:\n");
	printf("\t 4.- Division:\n");
	printf("\t 5.- Potencia:\n");
	printf("\t 6.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	
	case 1: 
		printf("elegiste la opcion de suma\n");
		c = a + b;
		printf("el resultado es %d\n",c);
		break;
		
	case 2:
		

		printf("elegiste la opcion de resta\n") ;
		c = a - b;
		printf("el resultado es %d\n",c);
		break;
		
	case 3:
		
		printf("elegiste la opcion de multiplicacion\n") ;
		c = a * b;
		printf("el esultado es %d\n", c);
		break;
		
	case 4:
		
		printf("elegiste la opcion de Division\n");
		if (c==0) {
		
			printf("no se puede dividir entre 0\n");
	}
		else{
			c = a / b;
			printf("el resultado de %d / %d es: %D\n");
		}
		
		printf("el resultado es %d\n", c);
		break;
		
		
	default:
		printf("No esta puesta correctamente la unidad\n");
	}	exit(0);

} 
