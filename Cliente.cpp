#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << cep << endl;

}

void Cliente::cadastrar(std::string NOME, string endereco, string CIDADE, string UF, string cep, string telefone)
{
	this->NOME = NOME;
	this->endereco = endereco;
	this->CIDADE = CIDADE;
	this->UF = UF;
	this->cep = cep;
	this->telefone = telefone;
}
