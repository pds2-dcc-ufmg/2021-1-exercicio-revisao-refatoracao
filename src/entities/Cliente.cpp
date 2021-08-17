#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(){}

Cliente::Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone):
					NOME(nome),endereco(endereco),CIDADE(cidade),UF(uf),cep(cep),telefone(telefone){};

Cliente::~Cliente(){}

void Cliente::print(){

	std::cout << "  Nome: " << this->getNome() << endl
		 << "  Telefone: " << this->getTelefone() << endl
		 << "  Endereço: " << this->getEndereco() << endl
		 << "  Cidade: " << this->getCidade() << endl
		 << "  Estado: " << this->getUf() << endl
		 << "  CEP: " << this->getCep() << endl;
}


string Cliente::getNome(){
	return this->NOME;
}

string Cliente::getEndereco(){
	return this->endereco;
}

string Cliente::getCidade(){
	return this->CIDADE;
}

string Cliente::getUf(){
	return this->UF;
}

string Cliente::getCep(){
	return this->cep;
}

string Cliente:: getTelefone(){
	return this->telefone;
}
