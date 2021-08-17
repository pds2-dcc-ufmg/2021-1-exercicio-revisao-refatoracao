#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    private:

       double TX_CASA = 0.06;

    public:

       //cálculo da comissão sobre o valor do imóvel
       double valor() override;

       //cálculo do valor do imóvel
       double comissao() override;

       //coloca na saída as informações do imóvel
       void print() override;

};

#endif
