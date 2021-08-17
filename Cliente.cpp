#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print(){
	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << TELEFONE << endl
		 << "  Endereço: " << ENDERECO << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << CEP << endl;
}

Cliente::Cliente() = 0;

Cliente::Cliente(string _NOME, string _ENDERECO, string _CIDADE, string _UF, string _CEP, string _TELEFONE):
 NOME(_NOME), ENDERECO(_ENDERECO), CIDADE(_CIDADE), UF(_UF), CEP(_CEP), TELEFONE(_TELEFONE) {}

 void Cliente::setNOME(string _NOME){
 	NOME = _NOME;
 }

 void Cliente::setENDERECO(string _ENDERECO){
 	ENDERECO = _ENDERECO;
 }

 void Cliente::setCIDADE(string _CIDADE){
 	CIDADE = _CIDADE;
 }

 void Cliente::setUF(string _UF){
 	UF = _UF;
 }

 void Cliente::setCEP(string _CEP){
 	CEP = _CEP;
 }

 void Cliente::setTELEFONE(string _TELEFONE){
 	TELEFONE = _TELEFONE;
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
