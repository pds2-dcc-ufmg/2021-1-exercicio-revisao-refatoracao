#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Pessoa {
    public:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;

        void print() const;
};

#endif