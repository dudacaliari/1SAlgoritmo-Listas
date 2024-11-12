#include <stdio.h>

void main()
{
	int i; 
	float soma, valor[15], media;

   for(i=0; i<15; i++)
   {
   do{
   	
	 printf("Digite o %do.valor: \n", i+1);
	 scanf("%f", &valor[i]);
	 if(valor < 0)
	  printf("Voce digitou um valor invalido! tente novamente...\n");
	  
   }while(valor < 0);
   
   	 soma= soma+valor[i];
   }
   
   media= soma/15;
   printf("A media foi de %.2f\n", media);
   
   printf("Os seguintes valores sao menores que a media:\n");
   
   for(i=0; i<15; i++)
     if(valor[i] < media)
     printf("%.2f\n", valor[i]);
	 
}
