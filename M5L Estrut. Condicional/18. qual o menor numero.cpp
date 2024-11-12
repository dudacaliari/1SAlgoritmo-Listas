#include <stdio.h>

int main()
{

float num1, num2, num3;

//Apresentação do programa
 printf("------------------------------\n");
 printf("Qual o menor numero?\n");
 printf("------------------------------\n");
 
//Escolha dos numeros
 printf("Escolha o primeiro numero:\n");
 scanf("%f", &num1);
 
 printf("Escolha o segundo numero:\n");
 scanf("%f", &num2);
 
 printf("Escolha o terceiro numero:\n");
 scanf("%f", &num3);

//Calculo de qual é menor
 if(num1 > num2 && num2 < num3)
   printf("O segundo numero escolhido eh o menor (%f)\n", num2);
 else if(num1 > num3 && num3 < num2)
   printf("O terceiro numero escolhido eh o menor (%f)\n", num3);
 else if(num1 == num2 && num1 < num3)
   printf("O primeiro e o segundo numero escolhido sao os menores (%f)\n", num1);
 else if(num3 == num2 && num2 < num1)
   printf("O segundo e o terceiro numero escolhido sao os menores (%f)\n", num3);
 else if(num1 == num3 && num3 < num2)
   printf("O primeiro e o terceiro numero escolhido sao os menores (%f)\n", num1);
 else 
   printf("O primeiro numero escolhido eh o menor (%f)\n", num1);
}
