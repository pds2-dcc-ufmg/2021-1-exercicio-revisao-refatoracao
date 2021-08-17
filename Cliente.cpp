#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print_cliente(){
	std::cout << "  Nome: " << get_nome() << endl
		 << "  Telefone: " << get_telefone() << endl
		 << "  Endereço: " << get_endereco() << endl
		 << "  Cidade: " << get_cidade() << endl
		 << "  Estado: " << get_uf() << endl
		 << "  CEP: " << get_cep() << endl;
}