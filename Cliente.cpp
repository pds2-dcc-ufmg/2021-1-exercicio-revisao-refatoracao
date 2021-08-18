#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(){
string nome = "";
string telefone = "";
string endereco = "";
string cidade = "";
string estado = "";
string cep = "";
string uf = "";
}

void Cliente::printDadosCliente(){
	std::cout << "  Nome: " 	<<   nome 	<< endl
			  << "  Telefone: " << telefone << endl
		 	  << "  Endereço: " << endereco << endl
		 	  << "  Cidade: "   <<  cidade 	<< endl
		 	  << "  Estado: "   <<    uf    << endl
		      << "  CEP: "      <<   cep	<< endl;
}

string Cliente::getNome()		{return this->nome;}
string Cliente::getTelefone()	{return this->telefone;}
string Cliente::getEndereco()	{return this->endereco;}
string Cliente::getCidade()		{return this->cidade;}
string Cliente::getEstado()		{return this->estado;}
string Cliente::getCep()		{return this->cep;}
string Cliente::getUf()			{return this->uf;}
	
void Cliente::setNome(string novoNome)			{this->nome = novoNome;}
void Cliente::setTelefone(string novoTelefone)	{this->telefone = novoTelefone;}
void Cliente::setEndereco(string novoEndereco)	{this->endereco = novoEndereco;}
void Cliente::setCidade(string novaCidade)		{this->cidade = novaCidade;}
void Cliente::setEstado(string novoEstado)		{this->estado = novoEstado;}
void Cliente::setCep(string novoCep)			{this->cep = novoCep;}
void Cliente::setUf(string novaUf)				{this->uf = novaUf;}