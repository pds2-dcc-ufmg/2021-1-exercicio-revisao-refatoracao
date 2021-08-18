#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    protected:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;
    public:
        string getNome () { return nome;}
        string getEndereco() { return endereco;}
        string getCidade () { return cidade;}
        string getUf () { return uf;}
        string getCep () { return cep;}
        string getTelefone () { return telefone;}

        void setNome (string _nome) { nome - _nome;}
        void setEndereco( string _endereco) { endereco = _endereco;}
        void setCidade (string _cidade) { cidade = _cidade;}
        void setUf (string _uf) { uf = _uf;}
        void setCep (string _cep) {cep = _cep;}
        void setTelefone (string _telefone) { telefone =  _telefone;}
        void print();
};

#endif

}
