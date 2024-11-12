#include <stdio.h>

int main()
{
	char carac;
	
//Apresentação do programa
printf("------------------------------------------\n");
printf("Descobrindo se eh uma letra\n");
printf("-------------------------------------------\n");

//Digite um caracter  
printf("Digite um caracter\n");
scanf("%c", &carac); 

//É uma letra?
 if(carac >= 65 && carac <= 90 )
 	printf("Esse caracter eh uma letra maiuscula!\n");

 else if (carac >= 97 && carac <= 122)
 	printf("Esse caracter eh uma letra minuscula!\n");

 else
    printf("Esse caracter eh um numero!\n");
}
