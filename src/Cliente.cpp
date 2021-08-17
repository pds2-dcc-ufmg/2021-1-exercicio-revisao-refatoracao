#include <iostream>
#include <string>
#include "Cliente.hpp"

// Setter para os dados dos clientes
void Cliente::setCliente(string _nome, string _endereco, string _cidade, string _estado, string _cep, string _telefone){
	nome = _nome;
    endereco = _endereco;
    cidade = _cidade;
    estado = _estado;
    cep = _cep;
    telefone = _telefone;
};

void Cliente::print(){
	cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << estado << endl
		 << "  CEP: " << cep << endl;
}