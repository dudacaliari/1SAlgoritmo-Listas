/*NotaDeCompra, num nota fiscal, numero de identificação do carro,
nome do comprador, nome do vendedor, preço do veiculo, financiado ou n (0 ou 1) 
//// 10 estruturas NotaDeCompra chamada comprasDeHoje leia do teclado 
//// imprimir total vendido, maior e menor vendas*/
 
#include <iostream>
#include <string.h>

const int MAXCOMP=10;

using namespace std;

typedef struct NotaDeCompra
{
	string nota_fiscal;
	string identificacao;
	string comprador;
	string vendedor;
	float preco;
	int financiado;
	
}NotaDeCompra;

void cabecalho()
{
	cout << "-------------------------------" << endl;
	cout << "        Carro dos Sonhos       " << endl;
	cout << "-------------------------------" << endl;
}

int leituraDeValores()
{
	int i;
	NotaDeCompra *comprasDeHoje;
	
	for(i=0; i<MAXCOMP; i++)
	{
		cout << "Digite os dados do " << i+1 << " Carro" << endl;
		
		cout << "Nota fiscal: " << endl;
		_flushall();
		getline(cin, comprasDeHoje[i].nota_fiscal);
	
		cout << "Numero da identificação do carro: " << endl;
		_flushall();
		getline(cin, comprasDeHoje[i].identificacao);

		cout << "Nome do comprador: " << endl;
		_flushall();
		getline(cin, comprasDeHoje[i].comprador);

		cout << "Nome do vendedor: " << endl;
		_flushall();
		getline(cin, comprasDeHoje[i].vendedor);
		
		cout << "Valor do carro: " << endl;
		cin >> comprasDeHoje[i].preco;
	
		cout << "Foi financiado? (0= nao, 1= sim)" << endl;
		cin >> comprasDeHoje[i].financiado;

		cout << "--------------------------------" << endl << endl;
	}
	
}

int maisMenosVendidos()
{
		
}

void impressaoDeValores(comprasDehoje)
{
	for (i=0; i<QTDPROF; i++)
	{
		do
		{
			cout << "Digite a posicao de cadastro do professor para imprimi-la: " << endl;
			cin >> numeroSelecionado;
			
			posicao = numeroSelecionado-1;
		    
			cout << "Professor "                     << numeroSelecionado << endl << endl;
			cout << "Nome: "                         << matricula[posicao].nome << endl;
			cout << "Numero da matricula: "          << matricula[posicao].num_matricula << endl;
			cout << "Endereco: "                     << matricula[posicao].endereco << endl;	
			cout << "Telefone: "                     << matricula[posicao].telefone << endl;
			cout << "Quantidade de aulas semanais: " << matricula[posicao].aulas_sem << endl;
			cout << "Nivel do professor: "           << matricula[posicao].nivel << endl;
	
			if(numeroSelecionado == 0)
			cout << "Numero invalido!" << endl;
			
	}
}

void main()
{
	cabecalho();
	
	leituraDeValores();
	
}



