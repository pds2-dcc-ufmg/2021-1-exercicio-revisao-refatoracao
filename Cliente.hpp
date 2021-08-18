#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using std::string;
using std::cout;
using std::endl;

class Cliente {

    public:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;

        void print();
};

#endif