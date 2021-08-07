#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <iostream>

using namespace std;

class Cliente {
    private:
        string nome, endereco, cidade, uf, cep, telefone;

    public:
        void print();

        Cliente(string nome, 
        string end, 
        string cid, 
        string uf, 
        string cep, 
        string tel) {
            this->nome = nome;
            this->endereco = end;
            this->cidade = cid;
            this->uf = uf;
            this->cep = cep;
            this->telefone = tel;
        }
};

#endif