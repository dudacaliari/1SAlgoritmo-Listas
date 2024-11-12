#include <stdio.h>

//Declaração das constantes
#define limite_imposto 23750
#define fat_mult 13
#define aliquota 20

int main()
{
	float rend_m, rend_a, impost;

//Apresentação do programa
printf("------------------------------------------\n");
printf("Calculo do imposto de renda\n");
printf("-------------------------------------------\n");

//Valor da renda mensal
printf("Digite o valor da sua renda mensal (em R$):\n");
scanf("%f", &rend_m); 

//Calculo da renda anual
rend_a= rend_m*fat_mult;
//Calculo do imposto
impost= (rend_a*aliquota)/100;

//Quanto ganhou
 if(rend_a < limite_imposto)
 	printf("Voce nao paga imposto de renda!\n");

 else
 	printf("Voce irah pagar R$%f de imposto esse ano.\n", impost);
}

