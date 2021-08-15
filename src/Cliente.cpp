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

void Cliente::set_nome(string nome){
    this->nome = nome;
}

string Cliente::get_nome(){
	return this->nome;
}

void Cliente::set_endereco(string endereco){
	this->endereco = endereco;
}

string Cliente::get_endereco(){
	return this->endereco;
}

void Cliente::set_cidade(string cidade){
	this->cidade = cidade;
}

string Cliente::get_cidade(){
	return this->cidade;
}

void Cliente::set_uf(string uf){
	this->uf = uf;
}

string Cliente::get_uf(){
	return this->uf;
}

void Cliente::set_cep(string cep){
	this->cep = cep;
}

string Cliente::get_cep(){
	return this->cep;
}

void Cliente::set_telefone(string telefone){
	this->telefone = telefone;
}

string Cliente::get_telefone(){
	return this->telefone;
}