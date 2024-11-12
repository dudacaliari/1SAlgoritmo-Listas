#include <iostream>

using namespace std;

void cabecalho()
{
	cout << "------------------------------------------" << endl;
	cout << "--------- CONVERSOR DE TEMPERATURA -------" << endl;
	cout << "------------------------------------------" << endl << endl;
}

float CparaF(float celsius)
{
	return (9*celsius + 160)/5;
}

float FparaC(float fahrehheit)
{
	return 5*(fahrehheit - 32)/9;
}

float CparaK(float celsius)
{
	return celsius + 273;
}

float KparaC(float kelvin)
{
	return CparaF(KparaC(kelvin));
}

float FparaK(float fahrehheit)
{
	return CparaK(FparaC(fahrehheit));
}

int menu()
{
	int escolha;
	
	do
	{
		cout << "1- Converter C para F." << endl;
		cout << "2- Converter C para K." << endl;
		cout << "3- Converter K para C." << endl;
		cout << "4- Converter F para C." << endl;
		cout << "5- Converter F para K." << endl;
		cout << "0- Sair" << endl << endl;
		
		cout << "Digite sua esolha: ";
		cin >> escolha;
		if (escolha < 0 || escolha > 5)
			cout << "\tValor invalido!" << endl;
			
	}while(escolha < 0 || escolha > 5);
	
	return escolha; 
}

int main()
{
	float temperatura;
	int opcao;
	
	cabecalho();
	
	do
	{
		opcao = menu();
		
		if(opcao != 0)
		{
			cout << "Digite a tempertura: ";
			cin >> temperatura;
		}
		
		switch(opcao)
		{
			case 1:
				cout << "Convertendo de C para F..." << endl;
				cout << temperatura << " graus C corresponde a " << CparaF(temperatura) << " graus F." << endl << endl;
			break;
			
			case 2:
				cout << "Convertendo de C para K..." << endl;
				cout << temperatura << " graus C corresponde a " << CparaK(temperatura) << " graus K." << endl << endl;	
			break;
			
			case 3:
				cout << "Convertendo de K para C..." << endl;
				cout << temperatura << " graus K corresponde a " << KparaC(temperatura) << " graus C." << endl << endl;
			break;
			
			case 4:
				cout << "Convertendo de F para C..." << endl;
				cout << temperatura << " graus K corresponde a " << FparaC(temperatura) << " graus F." << endl << endl;
			break;
			
			case 5:
				cout << "Convertendo de F para K..." << endl;
				cout << temperatura << " graus F corresponde a " << FparaK(temperatura) << " graus K." << endl << endl;
			break;
			
			default:
				cout << "Saindo..." << endl;	
		} 
		
	}while(opcao != 0);
	
	
	
	return 0;
}
