#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string NOME, std::string endereco, std::string CIDADE, std::string UF, std::string cep, std::string telefone){
	_nome = NOME;
	_endereco = endereco;
	_cidade = CIDADE;
	_uf = UF;
	_cep = cep;
	_telefone = telefone;
}

void Cliente::print(std::string NOME, std::string telefone, std::string endereco, std::string CIDADE, std::string UF, std::string cep){

	std::cout << "  Nome: " << NOME << std::endl
		 << "  Telefone: " << telefone << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << CIDADE << std::endl
		 << "  Estado: " << UF << std::endl
		 << "  CEP: " << cep << std::endl;

}