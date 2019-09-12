#include <stdio.h>
int main()
{
	float cm, pul, valor;
	char unidad;
	printf("Introduce numero y unidad p=pulg. o c=cm: ");
	scanf("%f %c",&valor, &unidad);

	if (unidad=='p')
	{
 		cm=valor*2.54;
		 printf("Las %f pulgadas son %f centímetros\n",valor,cm);
	}
	else if (unidad=='c')
	{
		pul=valor/2.54;
		printf("Los %f centímetros son %f pulgadas\n",valor,pul);
	}
	else if (unidad!='c' && unidad!='p')
	{
		printf("Valores incorrectos");
	}

    printf("Fin de programa\n");
	
} 	
