#include "Cliente.hpp"

// Função responsável por printar um resumo dos dados do cliente
void Cliente::print(){
	std::cout << "  Nome: " << nome << endl
			  << "  Telefone: " << telefone << endl
			  << "  Endereço: " << endereco << endl
			  << "  Cidade: " << cidade << endl
			  << "  Estado: " << uf << endl
			  << "  CEP: " << cep << endl;
}