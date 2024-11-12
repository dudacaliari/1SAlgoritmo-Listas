#include <iostream>
#include <string.h>

#define  QTDPROF 2

using namespace std;

typedef struct Professor
{
	string nome;
	int num_matricula;
	string endereco;
	string telefone;
	int aulas_sem;
	int nivel;
		
}Professor;

void cabecalho()
{
	cout << "------------------------------------" << endl;
	cout << "----- CADASTRANDO PROFESSORES ------" << endl;
	cout << "------------------------------------" << endl << endl;
}

void leDados(Professor *matric_prof)
{	
	int i;
	Professor matricula[QTDPROF];
	
	for (i=0; i<QTDPROF; i++)
	{ 
		cout << "Digite os dados do " << i+1 << " Professor" << endl;
		cout << "Digite 0 em tudo para sair" << endl << endl;

		cout << "Nome: ";
		_flushall();
		getline(cin, matricula[i].nome);
		
		cout << "Numero da matricula: ";
		cin >> matricula[i].num_matricula;
	
		cout << "Endereco: ";
		_flushall();
		getline(cin, matricula[i].endereco);
		
		cout << "Telefone: ";
		_flushall();
		getline(cin, matricula[i].telefone);
	
		cout << "Quantidade de aulas semanais: ";
		cin >> matricula[i].aulas_sem;
		
		cout << "Nivel do professor: ";
		cin >> matricula[i].nivel;
	
		cout << "---------------------------" << endl << endl;
			
		if (matricula[i].nome == "0" || matricula[i].num_matricula == 0 || 
		matricula[i].endereco == "0" || matricula[i].telefone == "0" || 
		matricula[i].aulas_sem == 0  || matricula[i].nivel == 0)
		 break;
	}
}

void imprimirDados()
{
	int numeroSelecionado,
	posicao;
	
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
				
	}while(numeroSelecionado == 0);
}

int main()
{

	Professor matricula[QTDPROF], *matric_prof;
		
	cabecalho();
	
	leDados(matric_prof);
	
	imprimirDados();
}
