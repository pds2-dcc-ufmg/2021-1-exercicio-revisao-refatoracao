#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << _nome << endl
		 << "  Telefone: " << _telefone << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _UF << endl
		 << "  CEP: " << _CEP << endl;

}

Cliente::Cliente(string nome, string endereco, string cidade, 
				string UF, string CEP, string telefone){
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cidade = cidade;
	this->_UF = UF;
	this->_CEP = CEP;
	this->_telefone = telefone;
}