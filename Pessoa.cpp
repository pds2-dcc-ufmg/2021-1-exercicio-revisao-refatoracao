#include <iostream>
#include <string>
#include "Pessoa.hpp"


Pessoa::Pessoa(const char *name, const char *address, const char *city, const char *state, const char *CEP, const char *number) {
	this->NOME = name;
  this->endereco = address;
	this->CIDADE = city;
  this->UF = state;
  this->cep = CEP;
  this->telefone = number;
}

void Pessoa::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << cep << endl;

}