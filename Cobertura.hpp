#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
    private:
    
       double TX_COBERTURA = 0.1;
    
    public:

       //cálculo da comissão sobre o valor do imóvel
       double valor() override;

       //cálculo do valor do imóvel
       double comissao() override;

       //coloca na saída as informações do imóvel
       void print() override;
};

#endif
