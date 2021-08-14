#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string nome,
			std::string endereco,
			std::string cidade,
			std::string uf,
			std::string cep,
			std::string telefone) {
				   
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cidade = cidade;
	this->_uf = uf;
	this->_cep = cep;
	this->_telefone = telefone;
}

void Cliente::set_nome(std::string nome){
	this->_nome = nome;
}

std::string Cliente::get_nome() {
	return this->_nome;
}

void Cliente::set_endereco(std::string endereco) {
	this->_endereco = endereco;
}

std::string Cliente::get_endereco() {
	return this->_endereco;
}

void Cliente::set_cidade(std::string cidade) {
	this->_cidade = cidade;
}

std::string Cliente::get_cidade() {
	return this->_cidade;
}

void Cliente::set_uf(std::string uf){
	this->_uf = uf;
}

std::string Cliente::get_uf() {
	return this->_uf;
}

void Cliente::set_cep(std::string cep){
	this->_cep = cep;
}

std::string Cliente::get_cep() {
	return this->_cep;
}

void Cliente::set_telefone(std::string telefone) {
	this->_telefone = telefone;
}

std::string Cliente::telefone(){
	return this->_telefone;
}

void Cliente::print(){
	std::cout << "  Nome: "     << this->_nome << std::endl;
	std::cout << "  Telefone: " << this->_telefone << std::endl;
	std::cout << "  Endereço: " << this->_endereco << std::endl;
	std::cout << "  Cidade: "   << this->_cidade << std::endl;
	std::cout << "  Estado: "   << this->_uf << std::endl;
	std::cout << "  CEP: "      << this->_cep << std::endl;
}