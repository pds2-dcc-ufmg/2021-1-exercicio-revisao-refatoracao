#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(
	string nome,
	string endereco,
	string cidade,
	string uf, 
	string cep,
	string telefone
) : nome(nome),
	endereco(endereco),
	cidade(cidade),
	uf(uf),
	cep(cep),
	telefone(telefone){}

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << uf << endl
		 << "  CEP: " << cep << endl;

}