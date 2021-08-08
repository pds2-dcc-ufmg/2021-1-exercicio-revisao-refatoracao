#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <iostream>

using namespace std;

/*
Classe responsável por representar um cliente
*/
class Cliente {
    private:
        // Dados sobre o cliente
        string nome, endereco, cidade, uf, cep, telefone;

    public:
        // Função responsável por printar um resumo dos dados do cliente
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