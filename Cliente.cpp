#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout 
		<< "  Nome: " << Nome << std::endl
		 << "  Telefone: " << Telefone << std::endl
		 << "  Endereço: " << Endereco << std::endl
		 << "  Cidade: " << Cidade << std::endl
		 << "  Estado: " << UF << std::endl
		 << "  CEP: " << CEP << std::endl;
}