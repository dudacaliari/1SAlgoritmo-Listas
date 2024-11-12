#include <stdio.h>

//Declaração das constantes
#define minimo_venda 3000
#define comissao 5

int main()
{
	float vend_m, valor_comis;
	
//Apresentação do programa
printf("------------------------------------------\n");
printf("Calculo da comissao\n");
printf("-------------------------------------------\n");

//Valor da venda mensal
printf("Digite o valor da sua venda mensal (em R$):\n");
scanf("%f", &vend_m); 

//Calculo da comissao
valor_comis= (vend_m*comissao)/100;

//Quanto ganhou
 if(vend_m <= minimo_venda)
 	printf("Voce nao ganhou comissao esse mes :(\n");

 else
 	printf("Voce tem direito a R$%f de comissao este mes.\n", valor_comis);
}

