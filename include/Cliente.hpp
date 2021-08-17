#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    private:
        string nome, endereco, cidade, uf, cep,telefone;
    public:
        Cliente(string _nome, string _endereco, string _cidade, string _uf, string _cep, string _telefone);
        void print();
};

#endif