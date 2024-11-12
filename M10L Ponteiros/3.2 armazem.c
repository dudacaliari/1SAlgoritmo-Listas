#include <stdio.h>
#include <stdlib.h>

#define TOTALPROD 100

void main()
{
	int i,
	menosVendido,
	maisVendido,
	quantPrecoAlto=0,
	numProd, 
	*quantidade;
	
	float *preco, 
	faturamento=0;
	
	//Numero de produtos
	do{
		printf("Digite a quantidade de produtos: \n");
		scanf("%d", &numProd);
		if(numProd<=0 || numProd>TOTALPROD)
			printf("\tValor invalido.\n\a");		
	} while (numProd<=0 || numProd>TOTALPROD);
	printf("*****************************************\n");
	
	//Alocando os vetores
	quantidade= (int*)malloc(numProd * sizeof(int));
	preco= (float*)malloc(numProd * sizeof(float));
	
	//Quantidade vendida
	printf("Digite 0 para sair\n");
	for(i=0; i<numProd; i++)
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
	
		//Preço dos produtos
    	do
	 	{
			printf("Digite o valor da  %do. mercadoria: \n", i+1);
			scanf("%f", &preco[i]);
			 
			if(preco[i] < 0)
			printf("Voce digitou um numero invalido! Tente novamente...\n");
	
   		}while(preco[i] < 0);
   		
		printf("*****************************************\n");	
		
		/*Faturamento mensal*/
 		faturamento += quantidade[i]*preco[i];
	}
	
	//Mais e menos vendido 
	maisVendido = menosVendido = 0;
	
	for(i=1; i<numProd; i++)
	{
		if(quantidade[i] > quantidade[maisVendido])
			maisVendido = i;
			
		if(quantidade[i] < quantidade[menosVendido])
			menosVendido = i;
	}

	//Preço acima do menos vendido
	for(i=0; i<numProd; i++)
		if(preco[i] > preco[menosVendido])
			quantPrecoAlto++;
			
	//Impressão de resultados 
    printf("O faturamento mensal foi de: %.2f\n", faturamento);
    printf("Item mais vendido: %do.\n", maisVendido+1);
	printf("Item menos vendido: %do.\n", menosVendido+1);
	printf("Preco do item menos vendido: R$ %.2f.\n", preco[menosVendido]);
	printf("Quantidade de itens com o preco acima do item menos vendido: %d", quantPrecoAlto);
    
}
