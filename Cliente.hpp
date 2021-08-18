#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    
    protected:
    string _nome, _endereco, _cidade, _uf, _cep, _telefone;
    
    public:
        /*Construtor da classe Cliente*/
        Cliente(string n, string e, string c, string uf, string cep, string tel)
        {
            _nome = n;
            _endereco = e; 
            _cidade = c; 
            _uf = uf; 
            _cep = cep; 
            _telefone = tel;
        }

        void print();
};

#endif