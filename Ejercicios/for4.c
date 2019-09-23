#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main(void)
{
  int x,y,z,cont;
  z=1;

  for (x-3;x<=5;x++){
  	for (y=0;y<=5;y++){
  		if(x==y)
  		z=0;
     		 printf("[%d]\t",z);
		 z++;
  	}
     	printf("\n");
  }
  getchar();
  return 0;
}
