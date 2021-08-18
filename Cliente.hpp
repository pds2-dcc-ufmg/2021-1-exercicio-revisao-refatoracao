#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        string Nome;
        string Endereco;
        string Cidade;
        string UF;
        string Cep;
        string Telefone;

        void print();
};

#endif
