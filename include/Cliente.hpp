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
        Cliente();
        Cliente(std::string Nome, std::string Endereco, std::string cidade, std::string Uf, std::string cep, std::string telefone);
        void print();
};

#endif
