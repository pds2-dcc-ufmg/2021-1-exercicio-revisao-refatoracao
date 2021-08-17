#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;
#define TAXA_C_COBERTURA  10

class Cobertura : public Imovel {
    
    public:
    Cobertura()
    {
        tipo = "[Cobertura]";
        taxaComissao = TAXA_C_COBERTURA;
    }
    double valor() {

        double v = AREA * valorMetro2;

        return v;

    }

    double comissao() {

        double c = AREA * valorMetro2;

        return ((c * TAXA_C_COBERTURA)/100);
        
    }

};

#endif