#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereço << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << uf << endl
		 << "  CEP: " << cep << endl;

}

void Cliente::setNome(string _nome){
       nome = _nome;
}

string Cliente::getNome(){
       return nome;
}

void Cliente::setEndereco(string _endereço){
       endereço = _endereço;
}

string Cliente::getEndereco(){
       return endereço;
}

void Cliente::setCidade(string _cidade){
       cidade = _cidade;
}

string Cliente::getCidade(){
       return cidade;
}

void Cliente::setUf(string _uf){
	uf = _uf;
}

string Cliente::getUf(){
	return uf;
}

void Cliente::setCep(string _cep){
       cep = _cep;
}

string Cliente::getCep(){
       return cep;
}

void Cliente::setTelefone(string _telefone){
       telefone = _telefone;
}

string Cliente::getTelefone(){
        return telefone;
}


