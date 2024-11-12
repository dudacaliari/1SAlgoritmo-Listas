#include <stdio.h>

//Declaração das constantes
#define ano_atual 2022
#define limite_maioridade 18

int main()
{
	int ano_n, idade;
	
//Apresentação do programa
printf("------------------------------------------\n");
printf("Calculo para saber se eh maior de idade\n");
printf("-------------------------------------------\n");

//Ano de nascimento 
printf("Difgite seu ano de nascimento\n");
scanf("%d", &ano_n); 

//Calculo da idade 
idade= ano_atual-ano_n;

//É maior de idade?
 if(idade >= limite_maioridade)
 	printf("Voce eh MAIOR de idade!\n");

 else
 	printf("Voce eh MENOR de idade\n");
}
