#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << cep << endl;

}