#include <iostream>
#include <string>
#include "Cliente.hpp"

const void Cliente::print(){

	std::cout << "  Nome: " << this->GetNome() << endl
		 << "  Telefone: " << this->GetTelefone() << endl
		 << "  Endereço: " << this->GetEndereco() << endl
		 << "  Cidade: " << this->GetCidade() << endl
		 << "  Estado: " << this->GetUF() << endl
		 << "  CEP: " << this->GetCep() << endl;

}

Cliente::Cliente(string _Nome, string _Endereco, string _Cidade, string _UF, string _Cep, string _Telefone){
	this->SetNome(_Nome);
	this->SetEndereco(_Endereco);
	this->SetCidade(_Cidade);
	this->SetUF(_UF);
	this->SetCep(_Cep);
	this->SetTelefone(_Telefone);
}

Cliente::Cliente(){

}

string Cliente::GetNome(){
	return this->Nome;
}

void Cliente::SetNome(string _Nome){
	this->Nome=_Nome;
}

string Cliente::GetEndereco(){
	return this->Endereco;
}

void Cliente::SetEndereco(string _Endereco){
	this->Endereco=_Endereco;
}

string Cliente::GetCidade(){
	return this->Cidade;
}

void Cliente::SetCidade(string _Cidade){
	this->Cidade=_Cidade;
}

string Cliente::GetUF(){
	return this->UF;
}

void Cliente::SetUF(string _UF){
	this->UF=_UF;
}

string Cliente::GetCep(){
	return this->Cep;
}

void Cliente::SetCep(string _Cep){
	this->Cep=_Cep;
}

string Cliente::GetTelefone(){
	return this->Telefone;
}

void Cliente::SetTelefone(string _Telefone){
	this->Telefone=_Telefone;
}