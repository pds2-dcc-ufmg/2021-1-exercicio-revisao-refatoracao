#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::mostrar_informacoes(){

	cout
		<< "  Nome: " << get_nome() << endl
		<< "  Telefone: " << get_telefone() << endl
		<< "  Endereço: " << get_endereco() << endl
		<< "  Cidade: " << get_cidade() << endl
		<< "  Estado: " << get_estado() << endl
		<< "  CEP: " << get_cep() << endl;

}

void Cliente::set_nome(string _nome){
	this->nome = _nome;
}

void Cliente::set_endereco(string _endereco){
	this->endereco = _endereco;
}

void Cliente::set_cidade(string _cidade){
	this->cidade = _cidade;
}

void Cliente::set_estado(string _estado){
	this->estado = _estado;
}

void Cliente::set_cep(string _cep){
	this->cep = _cep;
}

void Cliente::set_telefone(string _telefone){
	this->telefone = _telefone;
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

string Cliente::get_estado(){
	return estado;
}

string Cliente::get_cep(){
	return cep;
}

string Cliente::get_telefone(){
	return telefone;
}
