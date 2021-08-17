#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        string nome;
        string get_nome();
    
        string endereco;
        string get_endereco();
        
        string cidade;
        string get_cidade();
        
        string uf;
        string get_uf();
        
        string cep; 
        string get_cep();
        
        string telefone;
        string get_telefone();
        
        void print();
};

#endif
