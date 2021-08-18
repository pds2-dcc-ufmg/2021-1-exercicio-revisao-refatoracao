#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>


class Cliente {
    private:
        // Atributos
        std::string _nome;
        std::string _endereco;
        std::string _cidade;
        std::string _estado;
        std::string _cep;
        std::string _telefone;

    public:
        // Construtor
        Cliente();

        // Setters e Getters
        std::string get_nome();
        std::string get_endereco();
        std::string get_cidade();
        std::string get_estado();
        std::string get_cep();
        std::string get_telefone();

        void set_nome(std::string nome);
        void set_endereco(std::string endereco);
        void set_cidade(std::string cidade);
        void set_estado(std::string estado);
        void set_cep(std::string cep);
        void set_telefone(std::string telefone);

        // Outros metodos
        void print();
};

#endif
