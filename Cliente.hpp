#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {

    private:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;

    public:
        Cliente(
            string nome,
            string endereco,
            string cidade,
            string uf, 
            string cep,
            string telefone
        ): nome(nome), endereco(endereco), cidade(cidade), uf(uf), cep(cep), telefone(telefone){}
        
        void print();
        
};

#endif