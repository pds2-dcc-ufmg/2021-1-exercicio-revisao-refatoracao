#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
        //Metódo que calcula a comissão do imóvel (Apartamento)
        double comissao() override;
        //Metódo que calcula o valor do imóvel (Apartamento)
        double valor() override;
        //Metódo que escreve as informações do imóvel (Apartamento)
        void print() override;
    
    private:
        double Taxa_Comissao_Apartamento = 0.04;
};

#endif