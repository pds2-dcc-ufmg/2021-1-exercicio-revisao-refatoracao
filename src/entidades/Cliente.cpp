#include "Cliente.hpp"

string Cliente::getNome(){
	return this->_nome;
}
void Cliente::setNome(string n){
	this->_nome = n;
}

string Cliente::getEndereco(){
	return this->_endereco;
}
void Cliente::setEndereco(string ender){
	this->_endereco = ender;
}

string Cliente::getCidade(){
	return this->_cidade;
}
void Cliente::setCidade(string cidade){
	this->_cidade = cidade;
}

string Cliente::getUf(){
	return this->_uf;
}
void Cliente::setUf(string uf){
	this->_uf = uf;
}

string Cliente::getCep(){
	return this->_cep;
}
void Cliente::setCep(string cep){
	this->_cep = cep;
}

string Cliente::getTelefone(){
	return this->_telefone;
}
void Cliente::setTelefone(string tel){
	this->_telefone = tel;
}

void Cliente::print(){

	std::cout << "  Nome: " << getNome() << endl
		 << "  Telefone: " << getTelefone() << endl
		 << "  Endereço: " << getEndereco() << endl
		 << "  Cidade: " << getCidade() << endl
		 << "  Estado: " << getUf() << endl
		 << "  CEP: " << getCep() << endl;

}