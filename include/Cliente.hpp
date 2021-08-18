#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    protected:
        string nome;
        string endereco;
        string cidade;
        string UF;
        string CEP;
        string telefone;

    public:

        void setCliente(string _nome, string _endereco, string _cidade, string _UF, string _CEP, string _telefone);
        void print();
};

#endif