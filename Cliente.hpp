#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        string NOME, endereco, CIDADE, UF, cep, telefone;
    
       /* string endereco;
        //string CIDADE;
        //string UF;
        //string cep;
        //string telefone;
       */
    
        void print();
};

#endif
