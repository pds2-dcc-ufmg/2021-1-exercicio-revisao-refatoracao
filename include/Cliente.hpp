#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    
    public:
        void set_nome(string nome);

        string get_nome();

        void set_endereco(string endereco);

        string get_endereco();

        void set_cidade(string cidade);

        string get_cidade();
    
        void set_uf(string uf);

        string get_uf();

        void set_cep(string cep);

        string get_cep();

        void set_telefone(string telefone);

        string get_telefone();

        void print();

    private:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;
};

#endif