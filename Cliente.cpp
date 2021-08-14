#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	cout << "  Nome: " << _nome << endl
		 << "  Telefone: " << _telefone << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _estado << endl
		 << "  CEP: " << _cep << endl;
}

Cliente::Cliente(string n, string en, string c, string est, string cep, string tel): _nome(n), _endereco(en), _cidade(c), _estado(est), _cep(cep), _telefone(tel){}
