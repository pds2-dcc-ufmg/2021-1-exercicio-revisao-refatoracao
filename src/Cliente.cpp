#include <iostream>
#include <string>
#include "Cliente.hpp"

//Imprime os dados do Cliente
void Cliente::print(){
	std::cout << "  Nome: " << _nome << endl
		 << "  Telefone: " << _telefone << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _uf << endl
		 << "  CEP: " << _cep << endl;
}