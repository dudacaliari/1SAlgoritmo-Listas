#include <stdio.h>

int main()
{
	int x, resp;
	printf("Digite um numero:");
	scanf("%d", &x);
	
	if(x%2 == 0)
	 printf("O numero %d eh par!", x);
	else
	 printf("O numero %d eh impar!", x);
}
