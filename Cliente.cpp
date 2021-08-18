#include <iostream>
#include <string>
#include "Cliente.hpp"

void Pessoa::print(){
	std::cout << "  Nome: " << nome << endl;
	std::cout << "  Telefone: " << telefone << endl;
	std::cout << "  Endereço: " << endereco << endl;
	std::cout << "  Cidade: " << cidade << endl;
	std::cout << "  Estado: " << uf << endl;
	std::cout << "  CEP: " << cep << endl;
}