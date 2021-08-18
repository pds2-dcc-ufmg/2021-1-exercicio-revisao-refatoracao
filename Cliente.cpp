#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente :: Cliente (string nome_, string endereco_, string cidade_, string uf_, string cep_, string telefone_){
	nome = nome_;
    endereco = endereco_;
    cidade = cidade_;
    uf = uf_;
    cep = cep_;
    telefone = telefone_;

};

Cliente :: Cliente () {};

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << uf << endl
		 << "  CEP: " << cep << endl;

}