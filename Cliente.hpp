#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <iostream>
#include <string>
using namespace std;

class Cliente {
    public:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;

        Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone);
        void print() const;
};

#endif