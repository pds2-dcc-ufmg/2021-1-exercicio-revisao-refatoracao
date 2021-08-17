#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << TELEFONE << endl
		 << "  Endereço: " << ENDERECO << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << CEP << endl;

}

Cliente::Cliente(){}

Cliente::Cliente(string nome,string endereco,string cidade,string uf,string cep,string telefone){
	NOME = nome;
	ENDERECO = endereco;
	CIDADE = cidade;
	UF = uf;
	CEP = cep;
	TELEFONE = telefone;
}