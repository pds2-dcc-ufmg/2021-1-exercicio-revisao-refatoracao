#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl;
	std::cout << "  Telefone: " << TELEFONE << endl;
	std::cout << "  Endereço: " << ENDERECO << endl;
	std::cout << "  Cidade: " << CIDADE << endl;
	std::cout << "  Estado: " << UF << endl;
	std::cout << "  CEP: " << CEP << endl;
}