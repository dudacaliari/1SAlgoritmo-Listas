#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LINHA 25
#define COLUNA 70

void main()
{
	char texto[LINHA][COLUNA];
	int valor, i, j, caracteres=0, brancos=0, linhas=0;
	
	//Apresenta��o
	printf("-----------------------------------\n");
	printf("\tEditor de texto\n");
	printf("-----------------------------------\n");
	
	//Comandos
	printf("\tComandos:\n linha em branco: parar de escrever\n i: reimprimir o texto\n t: trocar linhas de lugar\n r: redigitar linha\n s: sair\n");
	printf("-----------------------------------\n");
	
	//Digitando o texto
	for(i=0; i<LINHA; i++)
	{
	  printf("%d : ", i+1); //Em que linha o usu�rio est�
      for(j=0; j<COLUNA; j++) 
      {
         scanf("%c", &texto[i][j]);//leitura do caracter
		 if(texto[i][j] == ' ') // Se o usu�rio digitar <enter>,
		 {
			texto[i][j] = '\0'; //coloca o caracter nulo no lugar
			break; // e encerra a leitura da linha atual.
		 }
		 
	// Estat�stica
		caracteres++;
		if(isspace(texto[i][j]))
		brancos++;
      }
	 if(texto[i][0] == ' ') // Se o usu�rio digitar <enter> no come�o da linha,
	 break; //encerra a leitura do texto
	 linhas++;
	}
	
	// Repeti��o do texto
	printf(" \nO texto digitado foi:\n");
	printf("-------------------------\n\n");
	for(i=0; i<linhas; i++)
	{
	  for(j=0; texto[i][j] != '\0'; j++)
	  printf("%c", texto[i][j]);
	  printf("\n");
	} 
	
	//Sele��o de comando 
	for(i=0; i<LINHA; i++)
	{
	  for(j=0; j<COLUNA; j++)
	  {
	    //Linha em branco
			 
	  }
	}
}
