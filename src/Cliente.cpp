#include <iostream>
#include <string>
#include "Cliente.hpp"


Cliente::Cliente(string _nome, string _endereco, string _cidade, string _uf, string _cep, string _telefone){
	this->nome = _nome;
	this->endereco = _endereco;
	this->cidade = _cidade;
	this->uf = _uf;
	this->cep = _cep;
	this->telefone = _telefone;
}
void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << uf << endl
		 << "  CEP: " << cep << endl;
}