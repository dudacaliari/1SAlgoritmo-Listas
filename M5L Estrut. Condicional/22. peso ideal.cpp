#include <stdio.h>

//Definição das constantes
#define valorMult_mas 72.7
#define valorMult_fem 62.1

#define valorSub_mas 58
#define valorSub_fem 44.7


int main()
{

float sexo, altura, peso, pesoid_Mas, pesoid_Fem, sobpes_Mas, sobpes_Fem;

//Apresentação do programa
 printf("------------------------------\n");
 printf("Calculo do Peso ideal\n");
 printf("------------------------------\n");
 
//Seleção do sexo
printf("Digite o numero do seu sexo:\n");
printf("1- Masculino\n");
printf("2- Feminino\n");
scanf("%f", &sexo);

//Valor da altura
printf("Qual a sua altura (em m)?\n");
scanf("%f", &altura);

//Valor do peso
printf("Qual o seu peso (em Kg)?\n");
scanf("%f", &peso);

//Calculo do peso ideal
pesoid_Mas= (valorMult_mas*altura)- valorSub_mas;
pesoid_Fem= (valorMult_fem*altura)- valorSub_fem;

//Calculo sobrepeso
sobpes_Mas= peso-pesoid_Mas;
sobpes_Fem= peso-pesoid_Fem;

//Valor final
if(sexo == 1)
 printf("O seu peso ideal eh de %f\n", pesoid_Mas);
else 
 printf("O seu peso ideal eh de %f\n", pesoid_Fem);
 
//Está com sobrepeso?
if(sobpes_Mas > 40 || sobpes_Fem > 40)
 printf("Voce estah com Obesidade. Tome cuidado!");
else if (sobpes_Mas < 0 || sobpes_Fem < 0)
 printf("Voce estah abaixo do peso ideal");
else if (sobpes_Mas == 0 || sobpes_Fem == 0)
 printf("Voce estah com o peso ideal");
else
 printf("Voce estah acima do peso ideal");
 
}
