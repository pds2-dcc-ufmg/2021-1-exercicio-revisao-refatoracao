#include <iostream>
#include <string>
#include "Cliente.hpp"

 string Cliente::get_nome() {
	 return "  Nome: " + this->nome;
 }
 string Cliente::get_endereco() {
	 return "  Endereço: " + this->endereco;
 }
 string Cliente::get_cidade() {
	 return "  Cidade: " + this->cidade;
 }
 string Cliente::get_uf() {
	 return "  Estado: " + this->uf;
 }
 string Cliente::get_cep() {
	 return "  CEP: " + this->cep;
 }
 string Cliente::get_telefone() {
	 return "  Telefone: " + this->telefone;
 }

void Cliente::print(){

	std::cout << this->get_nome() << endl
		 << this->get_telefone() << endl
		 << this->get_endereco() << endl
		 << this->get_cidade() << endl
		 << this->get_uf() << endl
		 << this->get_cep() << endl;

}
