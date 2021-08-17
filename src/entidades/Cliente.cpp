#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string _nome, string _endereco, string _cidade, string _uf, string _cep, string _telefone) :
				nome(_nome), endereco(_endereco), cidade(_cidade), uf(_uf), cep(_cep), telefone(_telefone){}


void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << uf << endl
		 << "  CEP: " << cep << endl;
}