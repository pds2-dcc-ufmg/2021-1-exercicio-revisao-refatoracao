#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(const char *nome, const char *end, const char *cid, const char *unifed, const char *cp, const char *tel)
{
	NOME = nome;
	endereco = end;
	CIDADE = cid;
	UF = unifed;
	cep = cp;
	telefone = tel;
}

void Cliente::print()
{

	std::cout << "  Nome: " << NOME << endl
			  << "  Telefone: " << telefone << endl
			  << "  Endereço: " << endereco << endl
			  << "  Cidade: " << CIDADE << endl
			  << "  Estado: " << UF << endl
			  << "  CEP: " << cep << endl;
}