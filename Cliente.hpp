#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <string>

class Cliente {
    public:
        std::string Nome;
        std::string Endereco;
        std::string Cidade;
        std::string UF;
        std::string CEP;
        std::string Telefone;

    void print();
};

#endif