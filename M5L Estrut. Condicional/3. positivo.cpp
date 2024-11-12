#include <stdio.h>

int main()
{
	int x;
	printf("Digite um numero:");
	scanf("%d", &x);
	
	if(x > 0)
	 printf("O numero %d eh positivo!", x);
	else
	 printf("O numero %d eh negativo!", x);
}
