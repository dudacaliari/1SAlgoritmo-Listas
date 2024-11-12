#include <stdio.h>

int main()
{
	int x, y, z;
	printf("Digite um numero:");
    	scanf("%d", &x);
	
	printf("Digite outro numero:");
    	scanf("%d", &y);
			
	z= (x-y);
	
  	if(z > 0)
	  printf("%d eh maior que %d\n", x, y);
 	else
	  printf("%d nao eh maior que %d", x, y);
}
