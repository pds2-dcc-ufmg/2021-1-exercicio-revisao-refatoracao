#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
    // Implementação da função que imprime todos os dados do cliente
	std::cout << "  Nome: " << NOME << endl
		 << "  Telefone: " << telefone << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << UF << endl
		 << "  CEP: " << cep << endl;

}