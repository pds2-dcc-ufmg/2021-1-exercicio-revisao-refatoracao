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

void Cliente::setNome(string _nome) {nome = _nome;}

void Cliente::setEndereco(string _endereco) {endereco = _endereco;}

void Cliente::setCidade(string _cidade) {cidade = _cidade;}

void Cliente::setUf(string _uf) {uf = _uf;}

void Cliente::setCep(string _cep) {cep = _cep;}

void Cliente::setTelefone(string _telefone) {telefone = _telefone;}