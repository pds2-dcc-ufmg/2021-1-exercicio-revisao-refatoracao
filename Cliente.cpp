#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string _nome, string _telefone, string _endereco, string _cidade, string _uf, string _cep){
    this->nome = _nome;
    this->telefone = _telefone; 
    this->endereco = _endereco;
    this->cidade = _cidade;
    this->uf = _uf;
    this->cep = _cep;
}

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << uf << endl
		 << "  CEP: " << cep << endl;

}
