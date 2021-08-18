#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente{
    public:

        // void setName(string name);
        // void setEnder(string ender);
        // void setCity(string city);
        // void setState(string state);
        // void SetCep(string cep);
        // void setNumber(string number);
        // void print();

        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;

        void print();

        
};

#endif
