#include <stdio.h>

//Declaração das constantes
#define limite 100
#define pdesc 10

int main()
{
	float comp, desc;

//Apresentação do programa
printf("------------------------------------------\n");
printf("Calculo de quantos cupons serao recebidos\n");
printf("-------------------------------------------\n");

//Valor da compra
printf("Digite o valor da compra:\n");
scanf("%f", &comp); 

//Calculo do desconto
desc= (comp*pdesc)/100;

//Quanto ganhou
 if(comp <= limite)
 	printf("Voce ganhou 1 cupom, parabens!\n");

 else
 	printf("Voce ganhou 2 cupons e R$%f de desconto, parabens!\n", desc);
}

