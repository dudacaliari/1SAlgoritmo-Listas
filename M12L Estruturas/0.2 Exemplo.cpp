#include <iostream>

using namespace std;

typedef struct Pessoa {
	string nome;
	int idade;
}Pessoa;

int main()
{
	Pessoa alguem;
	
	cout << "Nome: ";
	_flushall();
	getline(cin, alguem.nome);
	
	cout << "\tIdade: ";
	cin >> alguem.idade;
	
	cout << alguem.nome << " tem " << alguem.idade << " anos.";

	return 0;
}
