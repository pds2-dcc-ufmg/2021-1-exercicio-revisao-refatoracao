#include <iostream>
#include "Pessoa.hpp"

void Pessoa::print() const {
	std::cout << "  Nome: " << nome << endl
              << "  Telefone: " << telefone << endl
              << "  Endereço: " << endereco << endl
              << "  Cidade: " << cidade << endl
              << "  Estado: " << UF << endl
              << "  CEP: " << cep << endl;
}