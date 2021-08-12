#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print() {
	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << cep << endl;
}

void Cliente::setNome(string _nome) {
	NOME = _nome;
}
string Cliente::getNome() {
	return NOME;
}
void Cliente::setEndereco(string _endereco) {
	endereco = _endereco;
}
string Cliente::getEndereco() {
	return endereco;
}
void Cliente::setCidade(string _Cidade) {
	CIDADE = _Cidade;
}
string Cliente::getCidade() {
	return CIDADE;
}
void Cliente::setUF(string _UF) {
	UF = _UF;
}
string Cliente::getUF() {
	return UF;
}
void Cliente::setCep(string _Cep) {
	cep = _Cep;
}
string Cliente::getCep() {
	return cep;
}
void Cliente::setTelefone(string _Telefone) {
	telefone = _Telefone;
}
string Cliente::getTelefone() {
	return telefone;
}


