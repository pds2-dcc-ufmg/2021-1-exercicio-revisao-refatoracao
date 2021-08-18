#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

Cliente::Cliente(){
	nome     = ' ';
	endereco = ' ';
	cidade   = ' ';
	UF       = ' ';
	cep      = ' ';
	telefone = ' ';
}

void Cliente::setName(string _nome){
	nome = _nome;
}

void Cliente::setEndereco(string _endereco, string _cidade, string _estado, string _cep){
	endereco = _endereco;
	cidade   = _cidade;
	UF       = _estado;
	cep      = _cep;
}
void Cliente::setTelefone(string numero){
	telefone = numero;
}

string Cliente::getEndereco(char v){
	switch (v){
	case 'e':
		return endereco;
		break;
	case 'c':
		return cidade;
		break;
	case 'u':
		return UF;
		break;
	case 'p':
		return cep;
		break;
	default:
		break;
	}
}

string Cliente::getNome(){
	return nome;
}

string Cliente::getTelefone(){
	return telefone;
}

void Cliente::print(){
	cout << "  Nome: "     << getNome()         << endl
		 << "  Telefone: " << getTelefone()     << endl
		 << "  Endereço: " << getEndereco('e')  << endl
		 << "  Cidade: "   << getEndereco('c')  << endl
		 << "  Estado: "   << getEndereco('u')  << endl
		 << "  CEP: "      << getEndereco('p') << endl;
}