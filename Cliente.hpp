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

        string getNome();
        string getEndereco();
        string getCidade();
        string getUf();
        string getCep();
        string getTelefone();
        
        void print();
};

#endif
