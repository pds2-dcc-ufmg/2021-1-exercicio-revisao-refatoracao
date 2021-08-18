#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {

    public:
        Cliente(){}
        Cliente(string nome, string endereco, string cidade, string UF,  string cep, string telefone);
        void print();
    private:
        string nome;
        string endereco;
        string cidade;
        string UF;
        string cep;
        string telefone;    
};

#endif