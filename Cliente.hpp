#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
    public:
        void print();

        void setNome(std::string);
        std::string getNome();
        void setEndereco(std::string);
        std::string getEndereco();
        void setCidade(std::string);
        std::string getCidade();
        void setUf(std::string);
        std::string getUf();
        void setCep(std::string);
        std::string getCep();
        void setTelefone(std::string);
        std::string getTelefone();

    private:
        std::string _nome;
        std::string _endereco;
        std::string _cidade;
        std::string _uf;
        std::string _cep;
        std::string _telefone;
};

#endif