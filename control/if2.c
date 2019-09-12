#include <stdio.h>
int main()
{
	int edad;
	printf("Introduce tu edad: ");
	scanf("%d",&edad);

	if (edad >17 && edad <35)
	{
		 printf("Tienes %d años, eres mayor de edad",edad);
	}
	else if (edad < 18)
	{
		 printf("Tienes %d años, eres menor de edad",edad);
	}
	else if (edad >= 35 && edad <=110)
	
		 printf("Tienes %d años, eres chavo-ruco",edad);
    
	else if (edad >= 110)
	{
		 printf("Tienes %d años, eres un vampiro",edad);
	}
	else
	{
		 printf("Tienes %d años, ",edad);
	}
  return 0;
} 	
