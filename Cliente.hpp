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

        void print(); // imprime na tela os dados do cliente cadastrado

        void cadastrar(string NOME, string endereco, string CIDADE, string UF, string cep, string telefone);
};

#endif
