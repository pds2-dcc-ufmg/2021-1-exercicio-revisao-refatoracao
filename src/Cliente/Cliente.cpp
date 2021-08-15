#include "Cliente.hpp"

using namespace cliente;

Cliente::Cliente(){}

// Construtor

Cliente::Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone){
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cidade = cidade;
	this->_uf = uf;
	this->_cep = cep;
	this->_telefone = telefone;
}

	// Getters

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
	
// O método print() retorna uma string com as informações do objeto

string& Cliente::print(){
	string out = string("Nome: ") += nome() +=
			   string("Telefone: ") += telefone() += string("\n") +=
			   string("Endereço: ") += endereco() += string("\n") +=
			   string("Cidade: ") += cidade() += string("\n") +=
			   string("Estado: ") += uf() += string("\n") +=
			   string("CEP: ") += cep() += string("\n");			   

	return out;
}