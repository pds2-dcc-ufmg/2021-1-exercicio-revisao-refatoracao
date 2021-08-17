#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string nome, string endereco , string cidade , string uf, string cep , string telefone)
:_nome(nome) , _endereco(endereco) , _cidade(cidade) , _uf(uf) , _cep(cep) , _telefone(telefone){};

void Cliente::info(){
	std::cout << "  Nome: " << _nome << endl
		 << "  Telefone: " << _telefone << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _uf << endl
		 << "  CEP: " << _cep << endl;
}
