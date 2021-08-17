#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        void print_cliente();
        
        string get_nome();
        string get_endereco();
        string get_cidade();
        string get_uf();
        string get_cep();
        string get_telefone();

        void set_nome();
        void set_endereco();
        void set_cidade();
        void set_uf();
        void set_cep();
        void set_telefone();

    private:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;
};

#endif