#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << _Nome << endl
		 << "  Telefone: " << _Telefone << endl
		 << "  Endereço: " << _Endereco << endl
		 << "  Cidade: " << _Cidade << endl
		 << "  Estado: " << _Uf << endl
		 << "  CEP: " << _Cep << endl;

} 

void Cliente::set_variaveis(string Nome, string Endereco, string Cidade, string Uf, 
        string Cep, string Telefone) {
            _Nome = Nome;
            _Endereco = Endereco;
            _Cidade = Cidade;
            _Uf = Uf;
            _Cep = Cep;
            _Telefone = Telefone;
}
