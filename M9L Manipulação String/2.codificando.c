#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 100

void main()
{
	char frase[TAMANHO];
	int valor, i;
	
	//Apresentação
	printf("-----------------------------------\n");
	printf("\tCodificando a frase\n");
	printf("-----------------------------------\n");

	//Leitura
	do
	{
		printf("Digite a frase: \n");
		gets(frase);
		
	}while(frase[0] == '\0');
	
	//Codificando 
	for(i=0; i<TAMANHO && frase[i] != '\0'; i++)
	{
	   valor= toascii(frase[i]);
	
	   if(valor%2 == 0)
		   frase[i]= valor-3;
	
	   else
	       frase[i]= valor/2; 
    }
    
    //Apresentando 
    printf("Sua frase codificada eh: %s", frase);
}
