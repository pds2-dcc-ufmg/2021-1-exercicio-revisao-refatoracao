#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:

        void set_variaveis(string Nome, string Endereco, string Cidade, string Uf, 
        string Cep, string Telefone);
        
        void print();

    protected:

    string _Nome;
    string _Endereco;
    string _Cidade;
    string _Uf;
    string _Cep;
    string _Telefone;
};

#endif 
