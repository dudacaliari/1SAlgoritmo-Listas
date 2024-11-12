#include <stdio.h>

int main()
{
	float x, y, z, mEdia;
	printf("Digite a nota 1:");
    	scanf("%f", &x);
	
	printf("Digite a nota 2:");
    	scanf("%f", &y);
	
	printf("Digite a nota 3:");
    	scanf("%f", &z);
    
	mEdia= (x+y+z)/3;
	
  	if(mEdia >= 7)
	  printf("Voce foi aprovado, parabens!");
 	else
	  printf("Voce nao foi aprovado, tera que fazer a prova final...");
}
