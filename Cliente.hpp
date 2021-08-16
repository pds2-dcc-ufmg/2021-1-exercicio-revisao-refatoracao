#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
    private:
        std::string NOME;
        std::string endereco;
        std::string CIDADE;
        std::string UF;
        std::string cep;
        std::string telefone;

    public:    
        void print();
};

#endif