#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente {
    
    public:
        Cliente();
        
        Cliente(string _NOME, string _endereco, string _CIDADE, 
                string _UF, string _cep, string _telefone);
    
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;

        void print();
};

#endif
