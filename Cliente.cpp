#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(){}

Cliente::Cliente(string _Nome, string _Endereco, string _Cidade, string _UF, string _Cep, string _Telefone) :
Nome(_Nome), Endereco(_Endereco), Cidade(_Cidade), UF(_UF), Cep(_Cep), Telefone(_Telefone) {}

void Cliente::set_Nome(string _Nome){
	Nome = _Nome;
}

void Cliente::set_Endereco(string _Endereco){
	Endereco = _Endereco;
}

void Cliente::set_Cidade(string _Cidade){
	Cidade = _Cidade;
}

void Cliente::set_UF(string _UF){
	UF = _UF;
}

void Cliente::set_Cep(string _Cep){
	Cep = _Cep;
}

void Cliente::set_Telefone(string _Telefone){
	Telefone = _Telefone;
}

string Cliente::get_Nome(){
	return Nome;
}

string Cliente::get_Endereco(){
	return Endereco;
}

string Cliente::get_Cidade(){
	return Cidade;
}

string Cliente::get_UF(){
	return UF;
}

string Cliente::get_Cep(){
	return Cep;
}

string Cliente::get_Telefone(){
	return Telefone;

void Cliente::print(){

	std::cout << "Nome: " << Nome << endl
		 << "Telefone: " << Telefone << endl
		 << "Endereço: " << Endereco << endl
		 << "Cidade: " << Cidade << endl
		 << "Estado: " << UF << endl
		 << "CEP: " << Cep << endl;

}
