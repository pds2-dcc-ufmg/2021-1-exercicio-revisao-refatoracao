#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>
using namespace std;

class Cliente {
    public:
    
        void print();
        //
        string getNome();
        void setNome(string n);

        string getEndereco();
        void setEndereco(string ender);

        string getCidade();
        void setCidade(string cidade);

        string getUf();
        void setUf(string uf);

        string getCep();
        void setCep(string cep);

        string getTelefone();
        void setTelefone(string tel);

    private:

        string _nome;
        string _endereco;
        string _cidade;
        string _uf;
        string _cep;
        string _telefone;
};

#endif