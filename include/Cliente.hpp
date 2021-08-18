#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    private:
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;
    public:
        Cliente(string _nome, string _endr, string _cidd, string _uf, string _cep, string __tel);
        Cliente(){};
        void print();
};

#endif