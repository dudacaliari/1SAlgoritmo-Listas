#include <stdio.h>

//Declaração das constantes
#define minimo_lucro 3000
#define minimo_ret 1000.f
#define limite_ret 40

int main()
{
	float fat_m, desp_m, lucro_m, pode_ret;
	
//Apresentação do programa
printf("------------------------------------------------\n");
printf("Calculo de quanto poderah ser retirado este mes\n");
printf("------------------------------------------------\n");

//Valor do faturamento e despesas mensais
  printf("Digite o valor do seu faturamento mensal (em R$):\n");
scanf("%f", &fat_m); 
  printf("Digite o valor total de suas despesas mensais (em R$):\n");
scanf("%f", &desp_m);
 
//Calculo do lucro
lucro_m= fat_m-desp_m;

//Calculo quanto pode retirar
pode_ret= (fat_m*limite_ret)/100;

//Quanto pode retirar
 if(lucro_m <= minimo_lucro)
 	printf("Voce soh poderah retirar R$%f este mes.\n", minimo_ret);

 else
 	printf("Voce pode retirar R$%f este mes.\n", pode_ret);
}
