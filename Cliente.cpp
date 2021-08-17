#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone){
	this->NOME = nome;
	this->endereco = endereco;
	this->CIDADE = cidade;
	this->UF = uf;
	this->cep = cep;
	this->telefone = telefone;
}

void Cliente::print(){
	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << cep << endl;

}