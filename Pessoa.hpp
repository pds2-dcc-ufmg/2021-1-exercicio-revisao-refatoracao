#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Pessoa {
    public:

        Pessoa() {};
        Pessoa (const char *name, const char *address, const char *city, const char *state, const char *CEP, const char *number);

        void print();

    private:
    
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;

};

#endif