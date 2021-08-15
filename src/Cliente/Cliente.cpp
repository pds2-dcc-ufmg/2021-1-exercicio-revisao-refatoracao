#include "Cliente.hpp"

using namespace cliente;

Cliente::Cliente(){}

// Construtor

Cliente::Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone){
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cidade = cidade;
	this->_uf = uf;
	this->_cep = cep;
	this->_telefone = telefone;
}

	// Getters

	string Cliente::get_nome(){
		return this->_nome;
	}
	string Cliente::get_endereco(){
		return this->_nome;
	}
	
	string Cliente::get_cidade(){
		return this->_cidade;
	}
	
	string Cliente::get_uf(){
		return this->_uf;
	}
	
	string Cliente::get_cep(){
		return this->_cep;
	}
	
	string Cliente::get_telefone(){
		return this->_telefone;
	}
	
// O método print() retorna uma string com as informações do objeto

string Cliente::print(){
	string s_nome, s_telefone, s_endereco, s_cidade, s_uf, s_cep;
	s_nome = get_nome();
	s_telefone = get_telefone();
	s_endereco = get_endereco();
	s_cidade = get_cidade();
	s_uf = get_uf();
	s_cep = get_cep();

	// Concatenando strings
	
	string out("Nome: ");
	out.append(s_nome);
	out.append("\n");
	out.append("Telefone: ");
	out.append(s_telefone);
	out.append("\n"); 
	out.append("Endereço: ");
	out.append(s_endereco);
	out.append("\n");
	out.append("Cidade: "); 
	out.append(s_cidade); 
	out.append("\n"); 
	out.append("Estado: "); 
	out.append(s_uf); 
	out.append("\n"); 
	out.append("CEP: "); 
	out.append(s_cep); 
	out.append("\n");			   

	return out;
}