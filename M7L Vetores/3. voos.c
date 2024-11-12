#include <stdio.h>

void main()
{
	int total_passag=345, 
	opcao,          //Opcao do usuario
	i,              //Contador
	voo,            //Seleção do voo
	posicaoVoo=-1,
	voos[6]={727, 442, 331, 447, 221, 291},
	lugares_disponiveis[6]={total_passag, total_passag, total_passag, total_passag, total_passag, total_passag};
	
	char confirmacao;    //Confirmação do usuario

  do
   {
	do
	{
		printf("-----------------------------\n");
		printf("-           Menu            -\n");
		printf("-  Digite o numero da opcao -\n");
		printf("-     1. Listar voos        -\n");
		printf("-     2. Fazer reserva      -\n");
		printf("-     3. Cancelar reserva   -\n");
		printf("-     4. Sair do programa   -\n");
	    printf("-----------------------------\n");
	    printf("Digite a sua opcao: \n");
	    scanf("%d", &opcao);
	    if(opcao < 1 || opcao > 4)
	      printf ("Voce digitou um numero invalido, digite novamente!\n");
	}while(opcao < 1 || opcao > 4);
	
	
	switch(opcao)
	{
		case 1:
		 	printf("\n\n# Listando voos:\n");
		 	printf("Voo\t\tLugars disponiveis\n");
			 for(i=0; i<voos; i++)
		  	   printf("%d\t\t%d\n", voos[i], total_passag[i]);
		break;
		 
		case 2:
		    printf("\n\n# Fazendo reserva:\n");
		    
		    printf("Digite o codigo do voo: ");
		    scanf("%d", &voo);
		    
		    for(i=0; i<voos; i++)
		    { 
		       if(voos[i] == voo)
		        posicaoVoo=-1;
			}
		    
		    if(posicaoVoo == -1)
		    {
		    	printf("\t\nVoo nao encontrado!\n");
		    	break;
			}
			
			do{
				printf("Voce tem certeza da reserva?\n (s-sim, n-nao)");
				scanf(" %c", &confirmacao); 
				if(confirmacao == 's') 
				
			}while
		
	}
	
   
  }while
}
