#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>


class Cliente {
    public:
        std::string _nome;
        std::string _endereco;
        std::string _cidade;
        std::string _uf;
        std::string _cep;
        std::string _telefone;

        void Print();
};

#endif