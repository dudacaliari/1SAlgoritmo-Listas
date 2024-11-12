#include <stdio.h>

//Declaração das constantes
#define minimo_casa1 15
#define minimo_casa2 10

#define bonus1 15
#define bonus2 25
#define bonus3 500.f

int main()
{
	float salario, tempo_empr, sexo, bonus_r1, bonus_r2;
	
//Apresentação do programa
printf("------------------------------------------\n");
printf("Calculo do bonus que serah recebido.\n");
printf("-------------------------------------------\n");

//Valor do salario
printf("Digite o valor do seu salario (em R$):\n");
scanf("%f", &salario); 

//Quanto tempo tem de casa
printf("A quanto tempo voce trabalha nessa empresa (em anos)?\n");
scanf("%f", &tempo_empr);  
  //Superior a 15 anos
 if(tempo_empr > 15)
  {
 	printf("Voce eh do sexo masculino? (1 para sim e 0 para nao)\n");
 	scanf("%f", &sexo);
  }

//Calculo do bonus
bonus_r1 = (salario*bonus1)/100;
bonus_r2 = (salario*bonus2)/100;

//Quanto ganhou
 if(sexo == 1)
 	printf("Voce ganharah %f de bonus\n", bonus_r1);
 else if(tempo_empr > 10)
    printf("Voce ganharah %f de bonus\n", bonus_r2);
 else
 	printf("Voce tem direito a R$%f de bonus.\n", bonus3);
}

