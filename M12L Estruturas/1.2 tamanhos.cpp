#include <iostream>

using namespace std;

typedef struct Cor
{
	int R, G, B;
}Cor;

int main()
{
	Cor corDoCarro, corDaCasa;	
	
	cout << "Tamanho corDoCarro " << sizeof(corDoCarro) << endl;
	cout << "Tamanho corDaCasa " << sizeof(corDaCasa) << endl;
	
}
