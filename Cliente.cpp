#include <iostream>
#include <string>

#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, std::string cidade, std::string uf, std::string cep, std::string telefone)
{
	this->nome = nome;
	this->endereco = endereco;
	this->cidade = cidade;
	this->uf = uf;
	this->cep = cep;
	this->telefone = telefone;
}

void Cliente::setNome(std::string nome)
{
	this->nome = nome;
}

void Cliente::setCidade(std::string cidade)
{
	this->cidade = cidade;
}

void Cliente::setUf(std::string uf)
{
	this->uf = uf;
}

void Cliente::setTelefone(std::string telefone)
{
	this->telefone = telefone;
}

void Cliente::setCep(std::string cep)
{
	this->cep = cep;
}

void Cliente::setEndereco(std::string endereco)
{
	this->endereco = endereco;
}

void Cliente::print()
{
	std::cout << "  Nome: " << nome << std::endl
			  << "  Telefone: " << telefone << std::endl
			  << "  Endereço: " << endereco << std::endl
			  << "  Cidade: " << cidade << std::endl
			  << "  Estado: " << uf << std::endl
			  << "  CEP: " << cep << std::endl;
}