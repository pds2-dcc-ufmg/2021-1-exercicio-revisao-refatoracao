#include "Cliente.hpp"

using namespace cliente;

Cliente::Cliente(){}

Cliente::Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone){
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cidade = cidade;
	this->_uf = uf;
	this->_cep = cep;
	this->_telefone = telefone;
}

	string Cliente::nome(){
		return this->_nome;
	}
	string Cliente::endereco(){
		return this->_nome;
	}
	
	string Cliente::cidade(){
		return this->_cidade;
	}
	
	string Cliente::uf(){
		return this->_uf;
	}
	
	string Cliente::cep(){
		return this->_cep;
	}
	
	string Cliente::telefone(){
		return this->_telefone;
	}
	
void Cliente::print(){

	std::cout << "  Nome: " << nome() << endl
		 << "  Telefone: " << telefone() << endl
		 << "  Endereço: " << endereco() << endl
		 << "  Cidade: " << cidade() << endl
		 << "  Estado: " << uf() << endl
		 << "  CEP: " << cep() << endl;
}