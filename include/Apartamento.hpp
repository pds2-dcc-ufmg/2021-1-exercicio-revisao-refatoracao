#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
        //Método que calcula a comissão do imóvel (Apartamento)
        double comissao() override;
        //Método que calcula o valor do imóvel (Apartamento)
        double valor() override;
        //Método que escreve as informações do imóvel (Apartamento)
        void print() override;
    
    private:
        double Taxa_Comissao_Apartamento = 0.04;
};

#endif