#include <stdio.h>

int sumar(int n1, int n2);
int restar(int n1, int n2);
int multiplicacion(int n1, int n2);

int main(void)
{
	int suma = sumar(20, 230); /* Se ejecuta correctamente*/
	/*printf("La suma de %d + %d es: %d\n ",n1, n2, suma);*/
	printf("La suma es: %d\n ", suma);
	int resta = restar(1150, 230);
/*	printf("La resta de %d - %d es: %d ", numero2, numero1, suma);*/
	printf("La resta es: %d\n ", resta);
	int multiplicar = multiplicacion(5, 5);
	printf("\tla multiplicacion es %d\n", multiplicar 5, 5);
	return 0;
}
int sumar(int n1, int n2)
{
	return n1 + n2;
}
int restar(int n1, int n2)
{
	return n1 - n2;
}

int multiplicacion(int n1, int n2)
{
	return n1 n2;
}

