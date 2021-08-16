#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        // Construtor 
        Cliente(string name, string address, string city, string state, string zip, string phone);

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