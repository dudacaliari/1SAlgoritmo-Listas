#include <iostream>

using namespace std;

typedef struct Pessoa {
	string nome;
	int idade;
}Pessoa;

int main()
{
	Pessoa pes1= {"Fulano de Tal", 19};
	cout << pes1.nome << " tem " << pes1.idade << " anos.";
	
	return 0;
	
}
