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
        //Imprimir na tela informações sobre o cliente
        void print();
};

#endif