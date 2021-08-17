#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
    public:
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;

        void print();
};

#endif
