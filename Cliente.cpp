#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::PrintarDados() const {
	std::cout << "  Nome: " << nome_ << endl
		 << "  Telefone: " << telefone_ << endl
		 << "  Endereço: " << endereco_ << endl
		 << "  Cidade: " << cidade_ << endl
		 << "  Estado: " << UF_ << endl
		 << "  CEP: " << CEP_ << endl;

}