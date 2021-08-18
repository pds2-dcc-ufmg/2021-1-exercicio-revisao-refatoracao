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

        void print(){
            cout << "  Nome: " << NOME << endl
                << "  Telefone: " << telefone << endl
                << "  Endereço: " << endereco << endl
                << "  Cidade: " << CIDADE << endl
                << "  Estado: " << UF << endl
                << "  CEP: " << cep << endl;
        }
};

#endif