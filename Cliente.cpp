#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

Cliente::Cliente(){}

Cliente::Cliente(string _NOME, string _endereco, string _CIDADE, 
          	 string _UF, string _cep, string _telefone){

    NOME = _NOME;
    endereco = _endereco;
    CIDADE = _CIDADE;
    UF = _UF;
    cep = _cep;
    telefone = _telefone;

}

void Cliente::print(){

	cout << "  Nome: " << NOME << endl;
	cout << "  Telefone: " << telefone << endl;
	cout << "  Endereço: " << endereco << endl;
	cout << "  Cidade: " << CIDADE << endl;
	cout << "  Estado: " << UF << endl;
	cout << "  CEP: " << cep << endl;

}
