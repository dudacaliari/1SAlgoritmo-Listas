#include <iostream>

using namespace std;

typedef struct St_pessoa 
{
	string nome;
	int idade;
}St_Pessoa;

St_Pessoa maisVelha( St_Pessoa p1, St_Pessoa p2)
{
	if(p1.idade > p2.idade)
		return p1;
	return p2;
}

int main()
{
	St_Pessoa alguem= {"Duda", 18};
	St_Pessoa outra= {"Ruthelen", 22};
	
	cout << maisVelha(alguem, outra).nome << " eh x mais velhe." << endl;
	
	return 0;
}





