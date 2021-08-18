#include "Cliente.hpp"

Cliente::Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone){
	this->nome = std::move(nome);
	this->endereco = std::move(endereco);
	this->cidade = std::move(cidade);
	this->uf = std::move(uf);
	this->cep = std::move(cep);
	this->telefone = std::move(telefone);
}

void Cliente::print() const{
	std::cout << "  Nome: " << this->nome << endl
		 << "  Telefone: " << this->telefone << endl
		 << "  Endereço: " << this->endereco << endl
		 << "  Cidade: " << this->cidade << endl
		 << "  Estado: " << this->uf << endl
		 << "  CEP: " << this->cep << endl;
}