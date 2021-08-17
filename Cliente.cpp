#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print(){

	cout << "  Nome: " << NOME << endl
	cout << "  Telefone: " << telefone << endl
	cout << "  Endereço: " << endereco << endl
	cout << "  Cidade: " << CIDADE << endl
	cout << "  Estado: " << UF << endl
	cout << "  CEP: " << cep << endl;

}
