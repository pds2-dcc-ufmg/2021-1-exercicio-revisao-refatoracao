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
        Cliente(std::string nome, std::string endereco, std::string cidade, std::string uf, std::string cep, std::string telefone ) {
            this->NOME =  nome;
            this->endereco = endereco;
            this->CIDADE = cidade;
            this->UF = uf;
            this->cep = cep;
            this->telefone = telefone;
        }

        Cliente() {};

        void print();
};

#endif