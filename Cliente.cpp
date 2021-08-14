#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "  Nome: " << nome << endl
		      << "  Telefone: " << telefone << endl
		      << "  Endereço: " << endereco << endl
		      << "  Cidade: " << cidade << endl
		      << "  Estado: " << uf << endl
		      << "  CEP: " << cep << endl;
}

Cliente::Cliente(){}

Cliente::Cliente(string _nome, string _endereco, string _cidade, string _uf, string _cep, string _telefone):
nome(_nome), endereco(_endereco), cidade(_cidade), uf(_uf), cep(_cep), telefone(_telefone) {}

void Cliente::set_nome(string _nome){
	nome=_nome;
}

void Cliente::set_endereco(string _endereco){
	endereco=_endereco;
}

void Cliente::set_cidade(string _cidade){
	cidade=_cidade;
}

void Cliente::set_uf(string _uf){
	uf=_uf;
}

void Cliente::set_cep(string _cep){
	cep=_cep;
}

void Cliente::set_telefone(string _telefone){
	telefone=_telefone;
}

string Cliente::get_nome(){
	return nome;
}

string Cliente::get_endereco(){
	return endereco;
}

string Cliente::get_cidade(){
	return cidade;
}

string Cliente::get_uf(){
	return uf;
}

string Cliente::get_cep(){
	return cep;
}

string Cliente::get_telefone(){
	return telefone;
}