#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::Impressao_Cliente(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << TELEFONE << endl
		 << "  Endereço: " << ENDERECO << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << CEP << endl;

}

void Cliente::Inicializar_Cliente(string NOME, string ENDERECO, string CIDADE, string UF, string CEP, string TELEFONE){
	this->NOME = NOME;
	this->ENDERECO = ENDERECO;
	this->CIDADE = CIDADE;
	this->UF = UF;
	this->CEP = CEP;
	this->TELEFONE = TELEFONE;
}