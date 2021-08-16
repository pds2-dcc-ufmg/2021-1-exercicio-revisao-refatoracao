#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    public:
        void setNOME(string nome);
        void setENDERECO(string endereco);
        void setCIDADE(string cidede);
        void setUF(string uf);
        void setCEP(string cep);
        void setTELEFONE(string telefone);

        string getNOME();
        string getENDERECO();
        string getCIDADE();
        string getUF();
        string getCEP();
        string getTELEFONE();

        void print();
    
    private:
        string NOME;
        string ENDERECO;
        string CIDADE;
        string UF;
        string CEP;
        string TELEFONE;
};

#endif