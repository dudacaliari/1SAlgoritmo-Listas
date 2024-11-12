#include <iostream>
#include <string.h>

using namespace std;

typedef struct ModeloDeCasa
{
	int identificacao;
	string nomeComercial;
	int n_quartos;
	float areaUtil;
	float precoVenda;
		
}ModeloDeCasa;

void cabecalho()
{
	cout << "------------------------------------" << endl;
	cout << "-----         CASINHA         ------" << endl;
	cout << "------------------------------------" << endl << endl;
}

int main()
{
	ModeloDeCasa mod1 = {1, "Modelo 1", 3, 100, 300000};
	ModeloDeCasa mod2 = {2, "Modelo 2", 4, 250, 450000};
	ModeloDeCasa modStandard = {3, "Modelo Standard", 2, 80, 250000};
	
	cabecalho();
	
	cout << endl << "Casas: " << endl;
	
	cout << "Identificacao: " << mod1.identificacao << endl;
	cout << "Tipo: " << mod1.nomeComercial << endl;
	cout << "Numero de Quartos: " << mod1.n_quartos << endl;
	cout << "Area Util: " << mod1.areaUtil << endl;
	cout << "Preco de venda: " << mod1.precoVenda << endl << endl;
	
	cout << "Identificacao: " << mod2.identificacao << endl;
	cout << "Tipo: " << mod2.nomeComercial << endl;
	cout << "Numero de Quartos: " << mod2.n_quartos << endl;
	cout << "Area Util: " << mod2.areaUtil << endl;
	cout << "Preco de venda: " << mod2.precoVenda << endl << endl;
	
	cout << "Identificacao: " << modStandard.identificacao << endl;
	cout << "Tipo: " << modStandard.nomeComercial << endl;
	cout << "Numero de Quartos: " << modStandard.n_quartos << endl;
	cout << "Area Util: " << modStandard.areaUtil << endl;
	cout << "Preco de venda: " << modStandard.precoVenda << endl << endl;
	
}
