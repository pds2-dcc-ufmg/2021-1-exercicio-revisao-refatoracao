#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(){}

Cliente::Cliente(string _nome, string _endereco, string _cidade, string _uf,string _cep, string _telefone){
	NOME = _nome;
	ENDERECO = _endereco;
	CIDADE = _cidade;
	UF = _uf;
	CEP = _cep;
	TELEFONE = _telefone;
}

void Cliente::print(){
	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << TELEFONE << endl
		 << "  Endereço: " << ENDERECO << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << CEP << endl;
}