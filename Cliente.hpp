#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        string _nome;
        string _endereco;
        string _cidade;
        string _UF;
        string _CEP;
        string _telefone;

        Cliente(string nome, string endereco, string cidade, 
        string UF, string CEP, string telefone);
        Cliente() = default;
        void print();
};

#endif