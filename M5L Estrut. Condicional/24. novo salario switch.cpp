#include <stdio.h>

//Definição das constantes
#define aumento_ge 20
#define aumento_te 30
#define aumento_ou 15


int main()
{

float salario, salnv_ge, salnv_te, salnv_ou;
int categoria;

//Apresentação do programa
 printf("------------------------------\n");
 printf("Novo Salario Switch Case\n");
 printf("------------------------------\n");

//Seleção de categoria
printf("Digite o numero da sua categoria:\n");
printf("1- Gerente\n");
printf("2- Tecnico\n");
printf("3- Outra\n");
scanf("%d", &categoria);

//Valor do Salario
printf("Qual o valor em R$ do seu salario?");
scanf("%f", &salario);

//Calculo do aumento
salnv_ge= ((salario*aumento_ge)/100)+salario;
salnv_te= ((salario*aumento_te)/100)+salario;
salnv_ou= ((salario*aumento_ou)/100)+salario;

//Valor final
switch(categoria)
{
case 1:
printf("O seu novo salario serah de R$%f \n", salnv_ge);
break;
case 2:
printf("O seu novo salario serah de R$%f \n", salnv_te);
break;
case 3:
printf("O seu novo salario serah de R$%f \n", salnv_ou);
break;
default:
printf("Desculpe, nao existem outras opcoes. \n");
} 
}
