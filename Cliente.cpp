#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::setNome(std::string nome){
	this->_nome = nome;
}

string Cliente::getNome(){
	return this->_nome;
}

void Cliente::setEndereco(std::string endereco){
	this->_endereco = endereco;
}

string Cliente::getEndereco(){
	return this->_endereco;
}

void Cliente::setCidade(std::string cidade){
	this->_cidade = cidade;
}

string Cliente::getCidade(){
	return this->_cidade;
}

void Cliente::setUf(std::string uf){
	this->_uf = uf;
}

string Cliente::getUf(){
	return this->_uf;
}

void Cliente::setCep(std::string cep){
	this->_cep = cep;
}

string Cliente::getCep(){
	return this->_cep;
}

void Cliente::setTelefone(std::string telefone){
	this->_telefone = telefone;
}

string Cliente::getTelefone(){
	return this->_telefone;
}

void Cliente::print(){
	cout << "  Nome: " << _nome << endl
		 << "  Telefone: " << _telefone << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _uf << endl
		 << "  CEP: " << _cep << endl;
}