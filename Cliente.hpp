#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;

        void print(){
            std::cout << "  Nome: " << NOME << std::endl
		 << "  Telefone: " << telefone << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << CIDADE << std::endl
		 << "  Estado: " << UF << std::endl
		 << "  CEP: " << cep << std::endl;
        }
};

#endif