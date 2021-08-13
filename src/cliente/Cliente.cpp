#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::setNome(string n){
	nome=n;
}

void Cliente::setEndereco(string e){
	endereco=e;
}

void Cliente::setCidade(string c){
	cidade=c;
}

void Cliente::setUF(string U){
	UF=U;
}

void Cliente::setCEP(string C){
	CEP=C;
}

void Cliente::setTelefone(string t){
	telefone=t;
}

void Cliente::print(){
	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << CEP << endl;
}