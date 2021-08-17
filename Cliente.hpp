#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
    public:
        std::string nome;
        std::string endereco;
        std::string cidade;
        std::string uf;
        std::string cep;
        std::string telefone;

        void print();
};

#endif