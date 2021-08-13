#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;


void Cliente::print() {
	std::cout << "  Nome: " << nome_ << endl
	<< "  Telefone: " << telefone_ << endl
	<< "  Endereço: " << endereco_ << endl
	<< "  Cidade: " << cidade_ << endl
	<< "  Estado: " << uf_ << endl
	<< "  CEP: " << cep_ << endl;

}


void Cliente::set_cliente (string nome, string endereco, string cidade, 
string uf, string cep, string telefone){
	nome_ = nome;
    endereco_ = endereco;
    cidade_ = cidade;
    uf_ = uf;
    cep_ = cep;
    telefone_ = telefone;
}