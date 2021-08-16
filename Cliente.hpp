#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    
    private:
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;
    
    public:
        //CONSTRUCTORS 
        Cliente(){};

        Cliente(string nome, string end, string cid, string uf, string cep, string tel){
            this->NOME = nome;
            this->endereco = end;
            this->CIDADE = cid;
            this->UF = uf;
            this->cep = cep;
            this->telefone = tel;
        }

        void print();
};

#endif