#ifndef CLIENTE_HPP
#define CLIENTE_HPP

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

        Cliente ();

        Cliente (string nome_, string endereco_, string cidade_, string uf_, string cep_, string telefone_);

        void print();
};

#endif