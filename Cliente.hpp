#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;


class Cliente {
    public:
        void set_cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone);
        void print();

    private:       
        string nome_;
        string endereco_;
        string cidade_;
        string uf_;
        string cep_;
        string telefone_;
};

#endif