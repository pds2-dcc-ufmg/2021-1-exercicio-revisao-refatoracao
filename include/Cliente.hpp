#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        Cliente();
        Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone);
        void print();
        string get_name() { return nome_; };
        string get_address() { return endereco_; };
        string get_city() { return cidade_; };
        string get_state() { return uf_; };
        string get_zip_code() { return cep_; };
        string get_phone() { return telefone_; };

    private:
        string nome_;
        string endereco_;
        string cidade_;
        string uf_;
        string cep_;
        string telefone_;
};

#endif