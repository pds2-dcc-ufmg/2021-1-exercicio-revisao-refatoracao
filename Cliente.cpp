#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: "     << nome     << std::endl
		      << "  Telefone: " << telefone << std::endl
		      << "  Endereço: " << endereco << std::endl
		      << "  Cidade: "   << cidade   << std::endl
		      << "  Estado: "   << uf       << std::endl
		      << "  CEP: "      << cep      << std::endl;

}