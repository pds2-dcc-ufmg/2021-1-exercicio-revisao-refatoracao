#include "Cliente.hpp"

#include <iostream>
#include <string>


Cliente::Cliente() {};

Cliente::Cliente(std::string _nome, std::string _endereco, std::string _cidade, std::string _uf, 
				std::string _cep, std::string _telefone) {
	this->set_nome(_nome);
	this->set_endereco(_endereco);
	this->set_cidade(_cidade);
	this->set_uf(_uf);
	this->set_cep(_cep);
	this->set_telefone(_telefone);
};

void Cliente::print(){
	std::cout << "  Nome: " << get_nome() << std::endl
		 << "  Telefone: " << get_telefone() << std::endl
		 << "  Endereço: " << get_endereco() << std::endl
		 << "  Cidade: " << get_cidade() << std::endl
		 << "  Estado: " << get_uf() << std::endl
		 << "  CEP: " << get_cep() << std::endl;
}

// getters
std::string Cliente::get_nome() {
	return this->nome;
}

std::string Cliente::get_endereco() {
	return this->endereco;
}

std::string Cliente::get_cidade() {
	return this->cidade;
}

std::string Cliente::get_uf() {
	return this->uf;
}

std::string Cliente::get_cep() {
	return this->cep;
}

std::string Cliente::get_telefone() {
	return this->telefone;
}

// setters
void Cliente::set_nome(std::string _nome) {
	this->nome = _nome;
}

void Cliente::set_endereco(std::string _endereco) {
	this->endereco = _endereco;
}

void Cliente::set_cidade(std::string _cidade) {
	this->cidade = _cidade;
}

void Cliente::set_uf(std::string _uf) {
	this->uf = _uf;
}

void Cliente::set_cep(std::string _cep) {
	this->cep = _cep;
}

void Cliente::set_telefone(std::string _telefone) {
	this->telefone = _telefone;
}