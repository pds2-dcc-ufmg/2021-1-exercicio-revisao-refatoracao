#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string name, string address ,string city, string state, string zip, string phone) {
	NOME = name;
	endereco = address;
	CIDADE = city;
	UF = state;
	cep = zip;
	telefone = phone;
}

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << cep << endl;

}