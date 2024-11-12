#include <stdio.h>

int main()
{

float lado1, lado2, lado3, lado23, lado13, lado21;

//Apresentação do programa
 printf("------------------------------\n");
 printf("Qual o tipo de triangulo\n");
 printf("------------------------------\n");
 
//Escolha dos lados
   printf("Digite o numero do Primeiro lado do triangulo\n");
scanf("%f", &lado1);
   printf("Digite o numero do Segundo lado do triangulo\n");
scanf("%f", &lado2);
   printf("Digite o numero do Terceiro lado do triangulo\n");
scanf("%f", &lado3); 

//Calculo dos lados
lado23= lado2+lado3;
lado13= lado1+lado3;
lado21= lado2+lado1;

//Está com sobrepeso?
if(lado23 < lado1 || lado13 < lado2 || lado21 < lado3)
 printf("Estes lados nao podem constituir um triangulo!");
else if (lado1 == lado2 && lado2 == lado3)
 printf("Este triangulo eh Equilatero!");
else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
 printf("Este triangulo eh Isosceles!");
else
 printf("Este triangulo eh Escaleno!");
 
}
