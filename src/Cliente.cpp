#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::imprimeInformacoes() {
	std::cout << "  Nome: " << nome << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << uf << endl
		 << "  CEP: " << cep << endl;
}