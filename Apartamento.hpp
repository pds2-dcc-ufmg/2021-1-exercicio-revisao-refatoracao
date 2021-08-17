#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;
#define TAXA_C_APARTAMENTO  4

class Apartamento : public Imovel {

    public: 
    Apartamento()
    {
        tipo = "[Apartamento]";
        taxaComissao = TAXA_C_APARTAMENTO;
    }
    double valor() {

        double v = AREA * valorMetro2;

        return v;

    }

    double comissao() {

        double c = AREA * valorMetro2;

        return ((c * TAXA_C_APARTAMENTO)/100);
        
    }


};

#endif