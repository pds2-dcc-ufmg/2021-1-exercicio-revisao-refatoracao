#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
    private:
        std::string _nome;
        std::string _endereco;
        std::string _cidade;
        std::string _uf;
        std::string _cep;
        std::string _telefone;

    public:
        Cliente() {}

        Cliente(std::string nome, 
                std::string endereco, 
                std::string cidade, 
                std::string uf, 
                std::string cep, 
                std::string telefone);

        void set_nome(std::string nome);
        std::string get_nome();

        void set_endereco(std::string endereco);
        std::string get_endereco();
        
        void set_cidade(std::string cidade);
        std::string get_cidade();
        
        void set_uf(std::string uf);
        std::string get_uf();
        
        void set_cep(std::string cep);
        std::string get_cep();
        
        void set_telefone(std::string telefone);
        std::string telefone();

        void print();
};

#endif