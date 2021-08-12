#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {

    public:

        void print();
        void setNome(string n);
        void setEndereco(string e);
        void setCidade(string c);
        void setUF(string U);
        void setCEP(string C);
        void setTelefone(string t);
    
    private:

        string nome;

        string endereco;

        string cidade;

        string UF;

        string CEP;

        string telefone;

};

#endif