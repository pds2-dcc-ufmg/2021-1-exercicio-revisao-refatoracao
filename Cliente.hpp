#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    private:
        string NOME;
        string ENDERECO;
        string CIDADE;
        string UF;
        string CEP;
        string TELEFONE;

    public:
         Cliente();
         Cliente(string _NOME, string _ENDERECO, string _CIDADE, string _UF, string _CEP, string _TELEFONE);

         void setNOME(string _NOME);
         void setENDERECO(string _ENDERECO);
         void setCIDADE(string _CIDADE);
         void setUF(string _UF);
         void setCEP(string _CEP);
         void setTELEFONE(string _TELEFONE);
    
         string getNOME();
         string getENDERECO();
         string getCIDADE();
         string getUF();
         string getCEP();
         string getTELEFONE();
    
         void print();
};

#endif
