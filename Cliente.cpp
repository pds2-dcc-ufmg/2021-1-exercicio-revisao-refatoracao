#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::Print(){

	std::cout << "  Nome: " << _nome << std::endl
		 	<< "  Telefone: " << _telefone << std::endl
		 	<< "  Endereço: " << _endereco << std::endl
		 	<< "  Cidade: " << _cidade << std::endl
		 	<< "  Estado: " << _uf << std::endl
		 	<< "  CEP: " << _cep << std::endl;

}