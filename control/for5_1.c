#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int x,y,z,cont,numero
  x=0;
  y=1;
  
  
  printf ("Que numero quieres de fibonacci\n");
  scanf ("%d",&numero);
  
  if(numero==1){
  	printf("\n\n0\n1\n");
  }
  
  for (cont=0;cont<numero;cont++)

  {
      z=x+y;
      printf("%d\n",z);
      x=y;
      y=z;
  }
  getchar();
  return 0;
}
