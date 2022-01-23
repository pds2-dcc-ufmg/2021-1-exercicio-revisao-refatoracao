#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <iostream>
using namespace std;

class Cliente {
    public:
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;

        Cliente();

        void print();
};

#endif