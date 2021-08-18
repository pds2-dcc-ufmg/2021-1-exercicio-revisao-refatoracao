#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string _nome, string _endr, string _cidd, string _uf, string _cep, string _tel)
:NOME(_nome),endereco(_endr),CIDADE(_cidd),UF(_uf),cep(_cep),telefone(_tel)
{}

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << cep << endl;

}