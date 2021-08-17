#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;

        Cliente(string nome, string endereco, string cidade, string uf, string cep, string telefone);
        Cliente() = default;
        void print();
};

#endif