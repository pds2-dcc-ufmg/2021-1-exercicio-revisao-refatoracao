#include <iostream>
#include <string>
#include "Cliente.hpp"

//imprime as informacoes do cliente
void Cliente::print(){

	std::cout << "  Nome: " << Nome << endl;
	std::cout << "  Telefone: " << Telefone << endl;
	std::cout << "  Endereço: " << Endereco << endl;
	std::cout << "  Cidade: " << Cidade << endl;
	std::cout << "  Estado: " << UF << endl;
	std::cout << "  CEP: " << Cep << endl;

}

//METODOS SETTERS -> permite ao usuario alterar o valor das variaveis privadas da classe.
void Cliente::setNome(string n){
	Nome = n;
}

void Cliente::setEndereco(string end){
	Endereco = end;
}

void Cliente::setCidade(string cid){
	Cidade = cid;
}

void Cliente::setUF(string uf){
	UF = uf;
}

void Cliente::setCep(string cep){
	Cep = cep;
}

void Cliente::setTelefone(string tel){
	Telefone = tel;
}