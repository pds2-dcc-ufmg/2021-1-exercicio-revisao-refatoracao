#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << CEP << endl;

}

void Cliente::setCliente(string _nome, string _endereco, string _cidade, string _UF, string _CEP, string _telefone){
	nome = _nome;
	endereco = _endereco;
	cidade = _cidade;
	UF = _UF;
	CEP = _CEP;
	telefone = _telefone;
}