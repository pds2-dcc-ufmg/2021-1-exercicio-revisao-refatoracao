#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print() {

	std::cout << "  Nome: " << NOME << std::endl
		 << "  Telefone: " << telefone << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << CIDADE << std::endl
		 << "  Estado: " << UF << std::endl
		 << "  CEP: " << cep << std::endl;

}
Cliente::Cliente(){
	NOME = "";
	endereco = "";
	CIDADE = "";
	UF = "";
	cep = "";
	telefone ="";
	}
Cliente::Cliente(std::string Nome, std::string Endereco, std::string Cidade, std::string Uf, std::string Cep, std::string Telefone){
	NOME = Nome;
	endereco = Endereco;
	CIDADE = Cidade;
	UF = Uf;
	cep = Cep;
	telefone = Telefone;
}
