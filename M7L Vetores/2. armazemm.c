#include <stdio.h>

#define TOTALPROD 100

void main()
{
	int i,
	menosVendido,
	maisVendido,
	quantPrecoAlto=0, 
	quantidade[TOTALPROD];
	
	float preco[TOTALPROD], 
	faturamento=0;
	
	//Quantidade vendida
	printf("Digite 0 para sair\n");
	for(i=0; i<TOTALPROD; i++)
	{
	   do
	   {
		 	printf("Qual a quantidade vendida mensalmente do %do. produto: \n", i+1);
		 	scanf("%d", &quantidade[i]);
		 	if(quantidade[i] < 0)
		  		printf("Voce digitou um numero invalido! Tente novamente...\n");
		
	   }while(quantidade[i] < 0);
	   
	   if(quantidade[i] == 0)
		 	break; 
    }
	printf("*****************************************\n");
	
	//Preço dos produtos
    for(i=0; i<quantidade[i]; i++)
	{
    	do
	 	{
   	
			printf("Digite o valor da  %do. mercadoria: \n", i+1);
			scanf("%f", &preco[i]);
			 
			if(preco[i] < 0)
			printf("Voce digitou um numero invalido! Tente novamente...\n");
	
   		}while(preco[i] < 0);
   		
	/*Faturamento mensal*/
 	faturamento += quantidade[i]*preco[i];
	}
	
	//Mais e menos vendido 
	maisVendido = menosVendido = 0;
	
	for(i=1; i<quantidade[i]; i++)
	{
		if(quantidade[i] > quantidade[maisVendido])
			maisVendido = i;
			
		if(quantidade[i] < quantidade[menosVendido])
			menosVendido = i;
	}

	//Preço acima do menos vendido
	for(i=0; i<quantidade[i]; i++)
		if(preco[i] > preco[menosVendido])
			quantPrecoAlto++;
			
	//Impressão de resultados 
	printf("*****************************************************************\n");
    printf("O faturamento mensal foi de: %.2f\n", faturamento);
    printf("Item mais vendido: %do.\n", maisVendido+1);
	printf("Item menos vendido: %do.\n", menosVendido+1);
	printf("Preco do item menos vendido: R$ %.2f.\n", preco[menosVendido]);
	printf("Quantidade de itens com o preco acima do item menos vendido: %d", quantPrecoAlto);
    
}
