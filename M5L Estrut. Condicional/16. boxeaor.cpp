// Declara��o de constantes
#include <stdio.h>
#define Massa1 50
#define Massa2 59
#define Massa3 75
#define Massa4 87

int main()
{
float massa;

// Apresentacao do programa
printf("---------------------------\n");
printf("Categoria do boxeador\n");
printf("---------------------------\n");

// leitura da massa
printf("Qual a massa do boxeador? (em Kg)");
scanf("%f", &massa);

// Verifica��o se o usu�rio digitou um valor v�lido
if(massa == 0)
{
printf("Voce digitou uma massa invalida!\n");
return 0;
}

// Defini��o da categoria
if (massa < 50)
    printf("Esse boxeador eh categoria Palha!");

else if (massa < 59) 
    printf("Esse boxeador eh categoria Pluma!");

else if (massa < 75) 
    printf("Esse boxeador eh categoria Leve!");

else if (massa < 87) 
    printf("Esse boxeador eh categoria Pesado!");

else
    printf("Esse boxeador eh categoria Super pesado!");

}

