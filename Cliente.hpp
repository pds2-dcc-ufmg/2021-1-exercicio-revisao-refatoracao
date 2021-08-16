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

        void set_Cliente(string _NOME, string _endereco, string _CIDADE, string _UF, string _cep, string _telefone){
            NOME = _NOME;
            endereco = _endereco;
            CIDADE = _CIDADE;
            UF = _UF;
            cep = _cep;
            telefone = _telefone;
        };

        void print();
};

#endif