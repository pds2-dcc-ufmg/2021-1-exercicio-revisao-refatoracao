#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << TELEFONE << endl
		 << "  Endereço: " << ENDERECO << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << CEP << endl;

}
