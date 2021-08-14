#include <iostream>
#include <string>
#include "Cliente.hpp"

namespace Pessoa {

	Cliente::Cliente() {}

	Cliente::Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone):
		nome_(nome), endereco_(endereco), cidade_(cidade), uf_(uf), cep_(cep), telefone_(telefone) {}

	void Cliente::print(){

		std::cout << "  Nome: " << get_name() << endl
			<< "  Telefone: " << get_phone() << endl
			<< "  Endereço: " << get_address() << endl
			<< "  Cidade: " << get_city() << endl
			<< "  Estado: " << get_state() << endl
			<< "  CEP: " << get_zip_code() << endl;

	}

}