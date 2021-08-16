#include <iostream>
#include <string>
#include "Cliente.hpp"

string Cliente::getNome(){
	return this->_nome;
}
string Cliente::getEndereco() {
	return this->_endereco;
}
string Cliente::getCidade() {
	return this->_cidade;
}
string Cliente::getUf() {
	return this->_uf;
}
string Cliente::getCep() {
	return this->_cep;
}
string Cliente::getTelefone() {
	return this->_telefone;
}
void Cliente::setNome(string nome) {
	this->_nome = nome;
}
void Cliente::setEndereco(string endereco) {
	this->_endereco = endereco;
}
void Cliente::setCidade(string cidade) {
	this->_cidade = cidade;
}
void Cliente::setUf(string uf) {
	this->_uf = uf;
}
void Cliente::setCep(string cep) {
	this->_cep = cep;
}
void Cliente::setTelefone(string telefone) {
	this->_telefone = telefone;
}

void Cliente::print(){
	std::cout << "  Nome: " << _nome << endl
		 << "  Telefone: " << _telefone << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _uf << endl
		 << "  CEP: " << _cep << endl;

}