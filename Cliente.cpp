#include <iostream>
#include <string>
#include "Cliente.hpp"

 string Cliente::getNome() {return "  Nome: " + this->NOME;}
 string Cliente::getEndereco() {return "  Endereço: " + this->endereco;}
 string Cliente::getCidade() {return "  Cidade: " + this->CIDADE;}
 string Cliente::getUF() {return "  Estado: " + this->UF;}
 string Cliente::getCEP() {return "  CEP: " + this->cep;}
 string Cliente::getTelefone() {return "  Telefone: " + this->telefone;}


void Cliente::print(){

	std::cout << this->getNome() << endl
		 << this->getTelefone() << endl
		 << this->getEndereco() << endl
		 << this->getCidade() << endl
		 << this->getUF() << endl
		 << this->getCEP() << endl;

}