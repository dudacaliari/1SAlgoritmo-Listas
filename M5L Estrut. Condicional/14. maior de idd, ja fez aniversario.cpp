#include <stdio.h>

//Declaração das constantes
#define ano_atual 2022
#define limite_maioridade 18

int main()
{
	int ano_n, idade, ani, idd2;
	
//Apresentação do programa
printf("------------------------------------------\n");
printf("Calculo para saber se eh maior de idade\n");
printf("-------------------------------------------\n");

//Ano de nascimento 
printf("Digite seu ano de nascimento\n");
scanf("%d", &ano_n); 

//Calculo da idade 
idade= ano_atual-ano_n;

//Ja fez aniversario?
printf("Voce ja fez aniversario esse ano? (0 para sim e 1 para nao)\n");
scanf("%d", &ani);
  idd2= idade-ani;
  
//É maior de idade?
 if(idd2 >= limite_maioridade)
 	printf("Voce eh MAIOR de idade!\n");

 else
 	printf("Voce eh MENOR de idade\n");
}
