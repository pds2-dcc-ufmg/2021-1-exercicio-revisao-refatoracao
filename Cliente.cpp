#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << cep << endl;
}

Cliente::Cliente(string n, string en, string c, string est, string cep, string tel): _nome(n), _endereco(en), _cidade(c), _estado(est), _cep(cep), _telefone(tel){}
