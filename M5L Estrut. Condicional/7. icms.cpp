#include <stdio.h>

//Declaração das constantes
#define limite 100000
#define imposto1 10
#define imposto2 15

int main()
{
	float fatu, icms1, icms2;

//Apresentação do programa
printf("-------------------------------------\n");
printf("Calculo do valor do ICMS\n");
printf("-------------------------------------\n");

//Declaração do faturamento anual
printf("Digite o valor do seu faturamento anual:\n");
scanf("%f", &fatu); 
  
if(fatu <= 0)
 {
 	printf("O valor digitado nao eh valido!\n");
 }
{ 

icms1= ((fatu*imposto1)/100)+fatu; 
icms2= ((fatu*imposto2)/100)+fatu;

 if(fatu <= limite)
 	printf("O valor do seu ICMS serah de R$ %f", icms1);

 else
 	printf("O valor do seu ICMS serah de R$ %f", icms2);
}
}
