#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print()
{
	cout << "  Nome: " << getNome() << endl
		 << "  Telefone: " << getTelefone() << endl
		 << "  Endereço: " << getEndereco() << endl
		 << "  Cidade: " << getCidade() << endl
		 << "  Estado: " << getUf() << endl
		 << "  CEP: " << getCep() << endl;
}

Cliente::Cliente()
{
}

Cliente::Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone)
{
	setNome(nome);
	setEndereco(endereco);
	setCidade(cidade);
	setUf(uf);
	setCep(cep);
	setTelefone(telefone);
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

void Cliente::setUf(string uf)
{
	this->_uf = uf;
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
	return _nome;
}

string Cliente::getEndereco()
{
	return _endereco;
}

string Cliente::getCidade()
{
	return _cidade;
}

string Cliente::getUf()
{
	return _uf;
}

string Cliente::getCep()
{
	return _cep;
}

string Cliente::getTelefone()
{
	return _telefone;
}