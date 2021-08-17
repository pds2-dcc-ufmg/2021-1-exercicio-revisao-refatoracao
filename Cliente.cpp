#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone){
	_nome = nome;
	_telefone = telefone;
	_endereco = endereco;
	_cidade = cidade;
	_uf = uf;
	_cep = cep;
}

void Cliente::print(){

	std::cout << "  Nome: " << get_nome() << endl
		 << "  Telefone: " << get_telefone() << endl
		 << "  Endereço: " << get_endereco() << endl
		 << "  Cidade: " << get_cidade << endl
		 << "  Estado: " << get_uf << endl
		 << "  CEP: " << get_cep << endl;

}

string Cliente::get_nome(){
	return _nome;
}
string Cliente::get_telefone(){
	return _telefone;
}
string Cliente::get_endereco(){
	return _endereco;
}
string Cliente::get_cidade(){
	return _cidade;
}
string Cliente::get_uf(){
	return _uf;
}
string Cliente::get_cep(){
	return _cep;
}

void Cliente::set_nome(string nome){
	_nome = nome;
}
void Cliente::set_endereco(string endereco){
	_endereco = endereco;
}
void Cliente::set_cidade(string cidade){
	_cidade = cidade;
}
void Cliente::set_uf(string uf){
	_uf = uf;
}
void Cliente::set_cep(string cep){
	_cep = cep;
}
void Cliente::set_telefone(string telefone){
	_telefone = telefone;
}
