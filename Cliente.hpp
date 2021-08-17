#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
    public:
        Cliente(std::string nome, std::string endereco, std::string CIDADE, std::string UF, std::string cep, std::string telefone);
        Cliente();
        
        std::string _nome;
        std::string _endereco;
        std::string _cidade;
        std::string _uf;
        std::string _cep;
        std::string _telefone;

        void print(std::string _nome, std::string _endereco, std::string _cidade, std::string _uf, std::string _cep, std::string _telefone);
};

#endif