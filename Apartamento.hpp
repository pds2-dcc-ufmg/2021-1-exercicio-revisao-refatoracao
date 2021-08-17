#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
   
    private:

       double TX_APTO = 0.04;


    public:

       //cálculo da comissão sobre o valor do imóvel
       double valor() override;

       //cálculo do valor do imóvel
       double comissao() override;

       //coloca na saída as informações do imóvel
       void print() override;
};

#endif
