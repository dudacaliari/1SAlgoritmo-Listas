#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 80

void main()
{
	char frase[TAMANHO], ver_mai;
	int i;
	
	//Apresentação
	printf("-----------------------------------\n");
	printf("\tInvertendo a frase\n");
	printf("-----------------------------------\n");

	//Leitura
	do
	{
		printf("Digite a frase: \n");
		gets(frase);
		
	}while(frase[0] == '\0');
	
	//Trocando as letras
	for(i=0; i<TAMANHO && frase[i] != '\0'; i++)
	{
	   ver_mai= toupper(frase[i]);
	
	   if(frase[i] == ' ')
		   frase[i]= '-';
	   else if (ver_mai == frase[i])
	       frase[i]= tolower(frase[i]);
	   else
	       frase[i]= toupper(frase[i]); 
    }
    
    //Apresentando 
    printf("Sua frase codificada eh: %s", frase);
}
