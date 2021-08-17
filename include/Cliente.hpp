#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
    private:
        std::string nome;
        std::string endereco;
        std::string cidade;
        std::string uf;
        std::string cep;
        std::string telefone;
    
    public:
        Cliente();
        Cliente(std::string nome, std::string endereco, std::string cidade, std::string uf, std::string cep, std::string telefone);

        void print();

        // getters
        std::string get_nome();
        std::string get_endereco();
        std::string get_cidade();
        std::string get_uf();
        std::string get_cep();
        std::string get_telefone();

        // setters
        void set_nome(std::string);
        void set_endereco(std::string);
        void set_cidade(std::string);
        void set_uf(std::string);
        void set_cep(std::string);
        void set_telefone(std::string);
};

#endif