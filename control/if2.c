#include <stdio.h>
int main()
{
	int edad;
	printf("Introduce tu edad: ");
	scanf("%d",&edad);

	if (edad >17 && edad <35)
	{
		 printf("Tienes %d a�os, eres mayor de edad",edad);
	}
	else if (edad < 18)
	{
		 printf("Tienes %d a�os, eres menor de edad",edad);
	}
	else if (edad >= 35 && edad <=110)
	
		 printf("Tienes %d a�os, eres chavo-ruco",edad);
    
	else if (edad >= 110)
	{
		 printf("Tienes %d a�os, eres un vampiro",edad);
	}
	else
	{
		 printf("Tienes %d a�os, ",edad);
	}
  return 0;
} 	
