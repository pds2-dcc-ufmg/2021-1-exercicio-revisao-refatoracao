#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << uf << endl
		 << "  CEP: " << cep << endl;

}

//Declaração dos setters
void Cliente::setNome(string _nome){	
	nome = _nome;
}


void Cliente::setEndereco(string _endereco){
	endereco = _endereco;
}

void Cliente::setCidade(string _cidade){
	cidade = _cidade;
}

void Cliente::setUF(string _UF){
	uf = _UF;
}

void Cliente::setCEP(string _CEP){
	cep = _CEP;
}

void Cliente::setTelefone(string _telefone){
	telefone = _telefone;
}