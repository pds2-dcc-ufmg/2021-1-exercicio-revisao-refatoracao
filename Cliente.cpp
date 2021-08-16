#include <iostream>
#include <string>
#include "Cliente.hpp"

using std::string;

void Cliente::print(){

	std::cout << "  Nome: " << getNOME() << endl
		 << "  Telefone: " << getTELEFONE() << endl
		 << "  Endereço: " << getENDERECO() << endl
		 << "  Cidade: " << getCIDADE << endl
		 << "  Estado: " << getUF << endl
		 << "  CEP: " << getCEP << endl;

}


void Cliente::setNOME(string nome){
	NOME = nome;
}
void Cliente::setENDERECO(string endereco){
	ENDERECO = endereco;
}
void Cliente::setCIDADE(string cidade){
	CIDADE = cidade;
}
void Cliente::setUF(string uf){
	UF = uf;
}
void Cliente::setCEP(string cep){
	CEP = cep;
}
void Cliente::setTELEFONE(string telefone){
	TELEFONE = telefone;
}

string Cliente::getNOME(){
	return NOME;
}
string Cliente::getENDERECO(){
	return ENDERECO;
}
string Cliente::getCIDADE(){
	return CIDADE;
}
string Cliente::getUF(){
	return UF;
}
string Cliente::getCEP(){
	return CEP;
}
string Cliente::getTELEFONE(){
	return TELEFONE;
}