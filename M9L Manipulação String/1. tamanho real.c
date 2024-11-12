#include <stdio.h>
#include <string.h>

#define TAMANHO 80

void main()
{
	char frase[TAMANHO];
	int tam_real;
	
	//Apresentação
	printf("-----------------------------------\n");
	printf("Descubrindo o tamanho real da frase\n");
	printf("-----------------------------------\n");

	//Leitura
	do
	{
		printf("Digite a frase: \n");
		gets(frase);
		
	}while(frase[0] == '\0');
	
	//Tamanho real
	tam_real= strlen(frase);
	
	//Impressão
	printf("O tamanho real da frase eh de: %d", tam_real);
}
