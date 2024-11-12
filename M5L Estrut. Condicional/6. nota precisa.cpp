#include <stdio.h>

int main()
{
	float x, mEdia, pRecisa;
	printf("Digite a nota 1:");
    	scanf("%f", &x);
			
	pRecisa= 14-x;
	
  	if(x < 4)
	  printf("Voce esta na prova final :(, pecisaria de %f pontos para passar.", pRecisa);
 	else
	  printf("Voce pode ser aprovado, precisa de %f pontos", pRecisa);
}
