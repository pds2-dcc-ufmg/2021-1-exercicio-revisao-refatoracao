#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << Nome << endl
		 << "  Telefone: " << Telefone << endl
		 << "  Endereço: " << Endereco << endl
		 << "  Cidade: " << Cidade << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << Cep << endl;

}
