#include <stdio.h>

//Declaração das constantes
#define minimo_venda 3000
#define comissao 5

int main()
{
	int num1, num2, real_soma, soma;
	
//Apresentação do programa
printf("------------------------------------------\n");
printf("Vamos calcular!? :)\n");
printf("-------------------------------------------\n");

//Escolha dois numeros
printf("Escolha um numero bem bonito\n");
scanf("%d", &num1); 

printf("Agora, escolha outro numero\n");
scanf("%d", &num2); 

//Soma 
printf("Quanto da %d + %d?", num1, num2);
scanf("%d", &soma);
real_soma= num1+num2;

//Acertou?
 if(soma == real_soma)
 	printf("Voce eh muito inteligente, acertou o resultado! Parabens!\n");

 else
 	printf("Voce nao acertou dessa vez, que tal tentar de novo? ;) \n");
}
