#include <stdio.h>

//Definição das constantes
#define valor_da 3.258
#define valor_eu 4.095
#define valor_le 4.529
#define valor_yu 0.515

int main()
{

float valor_ac, con_da, con_eu, con_le, con_yu;
int opcaof;

//Apresentação do programa
 printf("------------------------------\n");
 printf("Conversao do Real Switch Case\n");
 printf("------------------------------\n");
 
//Menu de opções
printf("Digite o numero da opçao para conversao:\n");
printf("1- Dolar americano\n");
printf("2- Euro\n");
printf("3- Libra esterlina\n");
printf("4- Yuan\n");
scanf("%d", &opcaof);

//Valor em R$
printf("Qual o valor em R$ a ser convertido?");
scanf("%f", &valor_ac);

//Conversao 
con_da= valor_da*valor_ac;
con_eu= valor_eu*valor_ac;
con_le= valor_le*valor_ac;
con_yu= valor_yu*valor_ac;

//Valor final
switch(opcaof)
{
case 1:
printf("O valor em Dolar Americano ficarah %f\n", con_da);
break;
case 2:
printf("O valor em Euro ficarah %f\n", con_eu);
break;
case 3:
printf("O valor em Libras Esterlinas ficarah %f\n", con_le);
break;
case 4:
printf("O valor em Yuan ficarah %f\n", con_yu);
break;
default:
printf("Desculpe, nao existe outra opcao. \n");
}
}
