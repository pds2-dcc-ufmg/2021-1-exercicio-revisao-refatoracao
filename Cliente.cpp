//Incluindo bibliotecas
#include <iostream>
#include <string>

//Incluindo .hpp
#include "Cliente.hpp"

//Implementação dos métodos
//Imprime dados do Cliente
void Cliente::print(){
	std::cout << "  Nome: " << _nome << endl
		 << "  Telefone: " << _telefone << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _UF << endl
		 << "  CEP: " << _CEP << endl;
}

//Construtor de um Cliente
Cliente::Cliente(string nome, string endereco, string cidade, 
				string UF, string CEP, string telefone){
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cidade = cidade;
	this->_UF = UF;
	this->_CEP = CEP;
	this->_telefone = telefone;
}