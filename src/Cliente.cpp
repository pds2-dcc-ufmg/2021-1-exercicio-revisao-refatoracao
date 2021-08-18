#include <iostream>
#include <string>
#include "../headers/Cliente.hpp"

Cliente::Cliente()
{
	this->setNome(" ");
	this->setTelefone(" ");
	this->setEndereco(" ");
	this->setCidade(" ");
	this->setUF(" ");
	this->setCep(" ");
}

void Cliente::print()
{

	std::cout << "  Nome: " << getNome() << endl
			  << "  Telefone: " << getTelefone() << endl
			  << "  Endereço: " << getEndereco() << endl
			  << "  Cidade: " << getCidade() << endl
			  << "  Estado: " << getUF() << endl
			  << "  CEP: " << getCep() << endl;
}

void Cliente::setNome(string nome)
{
	this->_nome = nome;
}
void Cliente::setEndereco(string endereco)
{
	this->_endereco = endereco;
}
void Cliente::setCidade(string cidade)
{
	this->_cidade = cidade;
}
void Cliente::setUF(string UF)
{
	this->_UF = UF;
}
void Cliente::setCep(string cep)
{
	this->_cep = cep;
}
void Cliente::setTelefone(string telefone)
{
	this->_telefone = telefone;
}

string Cliente::getNome()
{
	return this->_nome;
}
string Cliente::getEndereco()
{
	return this->_endereco;
}
string Cliente::getCidade()
{
	return this->_cidade;
}
string Cliente::getUF()
{
	return this->_UF;
}
string Cliente::getCep()
{
	return this->_cep;
}
string Cliente::getTelefone()
{
	return this->_telefone;
}
