#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone);
        Cliente() {};

        void print();

        string get_nome();
        string get_endereco();
        string get_cidade();
        string get_uf();
        string get_cep();
        string get_telefone();

        void set_nome(string nome);
        void set_endereco(string endereco);
        void set_cidade(string cidade);
        void set_uf(string uf);
        void set_cep(string cep);
        void set_telefone(string telefone);

    private:
        string _nome;
        string _endereco;
        string _cidade;
        string _uf;
        string _cep;
        string _telefone;
};

#endif