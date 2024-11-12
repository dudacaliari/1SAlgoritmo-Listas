#include <stdio.h>
#include <stdlib.h>

#define NUM_MAX 15

void main()
{
	int i,
	quantidade; 
	float soma, 
	*valor, 
	media;
	
	do 
  	{
		printf("Qual serah a quantidade de numeros a serem calculados?\n");
		scanf("%d", &quantidade); 
		if(quantidade <= 0 || quantidade > NUM_MAX)
		   	 printf("Esse valor nao eh valido, digite novamente!! (o maximo sao 15)\n\n");
		    
 	}while(quantidade <= 0 || quantidade > NUM_MAX);
 	
 	valor= (float*)malloc(quantidade * sizeof(float));

   for(i=0; i<quantidade; i++)
   {
   		do
		{
			printf("Digite o %do.valor: \n", i+1);
			scanf("%f", &valor[i]);
			if(valor < 0)
			   printf("Voce digitou um valor invalido! tente novamente...\n");
	  
   		}while(valor < 0);
   
   	 soma= soma+valor[i];
   }
   
   media= soma/quantidade;
   printf("A media foi de %.2f\n", media);
   
   printf("Os seguintes valores sao menores que a media:\n");
   
   for(i=0; i<quantidade; i++)
     if(valor[i] < media)
     printf("%.2f\n", valor[i]);
	 
}
