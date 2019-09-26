#include <stdio.h>

long factorial(int n);
int n;
int main(void)

{
 do{
 	
    printf ("dame un numero:\n");
    scanf("%d", &n);
    printf("EL resultado del factorial de %d, es: %ld ",n, factorial(n));
    printf ("\nDeseas salir s/n\n");
    getchar();
  }while((getchar())!='s');
    return 0;
}
long factorial(int n)
{
	if (n == 0)/* caso base */{
	     //printf ("if, n vale : %d\n");
		return 1;
		} /* como 0! = 1, se retorna 1*/
	else{
		//printf ("else, n vale: %d\n");
	
		return n * factorial (n - 1);/* llamada a esta misma función */
		}/* llamada a esta misma función */
}


