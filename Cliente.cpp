#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout 
		<< "  Nome: " << getNome() << endl
		<< "  Telefone: " << getTelefone() << endl
		<< "  Endereço: " << getEndereco() << endl
		<< "  Cidade: " << getCidade() << endl
		<< "  Estado: " << getUF() << endl
		<< "  CEP: " << getCEP() << endl;
}