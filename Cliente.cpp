#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << _nome << endl
		 << "  Telefone: " << _telefone << endl
		 << "  Endereco: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _uf << endl
		 << "  CEP: " << _cep << endl;

}
