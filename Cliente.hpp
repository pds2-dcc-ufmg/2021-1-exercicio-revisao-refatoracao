#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <stdio.h>
using namespace std;

class Cliente {
    public:

        Cliente(string nome, string endereco, string cidade,
        string uf, string cep, string telefone): _nome(nome),
        _endereco(endereco), _cidade(cidade), _uf(uf), _cep(cep),
        _telefone(telefone) {}

        void print();

    protected:
        string _nome;
        string _endereco;
        string _cidade;
        string _uf;
        string _cep;
        string _telefone;
};

#endif
