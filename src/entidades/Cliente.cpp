#include <iostream>
#include <string>
#include "Cliente.hpp"


void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << cep << endl;

}

string Cliente::get_NOME(){
	return(NOME);
}

string Cliente::get_endereco(){
	return(endereco);
}

string Cliente::get_CIDADE(){
	return(CIDADE);
}

string Cliente::get_UF(){
	return(UF);
}

string Cliente::get_cep(){
	return(cep);
}

string Cliente::get_telefone(){
	return(telefone);
}

Cliente::Cliente(string newNOME, string newendereco, string newCIDADE, string newUF, string newcep, string newtelefone) : 
				 NOME(newNOME), endereco(newendereco), CIDADE(newCIDADE), UF(newUF), cep(newcep), telefone(newtelefone){}


Cliente::Cliente(){}

Cliente::~Cliente(){}

