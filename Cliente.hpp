#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        string NOME;
        string getNome();
    
        string endereco;
        string getEndereco();
        
        string CIDADE;
        string getCidade();
        
        string UF;
        string getUf();
        
        string cep; 
        string getCep();
        
        string telefone;
        string getTelefone();
        
        void print();
};

#endif
