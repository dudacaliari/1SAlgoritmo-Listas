#include <stdio.h>
#include <stdlib.h>

#define MAXLC 30

void main()
{
	int linhas, 
	colunas, 
	i, 
	j;
	float **matriz, 
	**transposta;
	
	printf("------------------\n");
	printf("Leitura de Matriz\n");
	printf("------------------\n\n");
	
	//Leitura de linhas e colunas
	do 
	  {
		  printf("Qual serah a quantidade de linhas da matriz? \n");
		  scanf("%d", &linhas);
		  if(linhas <= 0 || linhas > MAXLC)
		    printf("Esse valor nao eh valido, digite novamente!\n");
	  }while(linhas <= 0 || linhas > MAXLC);
	  
	do 
	  {
		  printf("Qual serah a quantidade de colunas da matriz? \n");
		  scanf("%d", &colunas);
		  if(colunas <= 0 || colunas > MAXLC)
		    printf("Esse valor nao eh valido, digite novamente!\n");
	  }while(colunas <= 0 || colunas > MAXLC);
	
	//Alocando vetor de matriz
	matriz= (float**)malloc(linhas * sizeof(float*));
	
	transposta= (float**)malloc(colunas * sizeof(float*));
	
	//Alocando cada uma das linhas da matriz
	for(i = 0; i < linhas; i++)
		matriz[i] = (float*)malloc(colunas * sizeof(float));
		
	for(i = 0; i < colunas; i++)
		transposta[i] = (float*)malloc(linhas * sizeof(float));
	  
	//Leitura dos valores
	  printf("Agora digite o valor de cada elemento:\n");
	for(i=0; i<linhas; i++)
	{
		for(j=0; j<colunas; j++)
	  	{
			printf("M[%d][%d] = ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
	 	}
	}
	
	//Resultado da matriz
	printf("\tMatriz definida: \n");
	for(i=0; i<linhas; i++)
	{
		for(j=0; j<colunas; j++)
	 	{
	  		printf("\t%.1f", matriz[i][j]);
	  	}
	  	printf("\n");
	}
	
	//Cálculo da transposta
	for(i=0; i<colunas; i++)
	{
		for(j=0; j<linhas; j++)
	  	{
			transposta[i][j]= matriz[j][i];
	  	}
	}
	
	printf("\tMatriz transposta: \n");
	for(i=0; i<colunas; i++)
	{
		for(j=0; j<linhas; j++)
	  	{
	  		printf("\t%.1f", transposta[i][j]);
	  	}
	  	printf("\n");
	}
}
