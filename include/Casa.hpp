#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
        //Método que calcula a comissão do imóvel (Casa)
        double comissao() override;
        //Método que calcula o valor do imóvel (Casa)
        double valor() override;
        //Método que escreve as informações do imóvel (Casa)
        void print() override;

    private:
        double Taxa_Comissao_Casa = 0.06;
};

#endif