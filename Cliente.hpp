#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include "Sistema.hpp"

using namespace std;

class Cliente : Sistema {
    private:
        string nome;
        string endereco;
        string cidade;
        string estado;
        string cep;
        string telefone;

    public:
        Cliente(){};
        Cliente(string nome, string endereco, string cidade, string estado, string cep, string telefone){
            this->nome = nome;
            this->endereco = endereco;
            this->cidade = cidade;
            this->estado = estado;
            this->cep = cep;
            this->telefone = telefone;
        }

        void print() override;
};

#endif