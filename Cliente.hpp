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

        void set_nome(string n);
        void set_endereco(string e);
        void set_cidade(string c);
        void set_uf(string u);
        void set_cep(string z);
        void set_telefone(string t);

    private:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;
};

#endif