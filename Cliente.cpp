#include <iostream>
#include <string>
#include "Cliente.hpp"


Cliente::Cliente(string _nome, string _endereco, string _cidade, string _UF,  string _cep, string _telefone): nome(_nome), endereco(_endereco), cidade(_cidade), UF(_UF), cep(_cep), telefone(_telefone) {}


void Cliente::print(){


	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << cep << endl;

}
