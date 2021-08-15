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

Cliente::Cliente(string nome, string endereco, string cidade, 
				string UF, string CEP, string telefone){
	this->nome = nome;
	this->endereco = endereco;
	this->cidade = cidade;
	this->UF = UF;
	this->CEP = CEP;
	this->telefone = telefone;
}