#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;
#define TAXA_C_CASA  6

class Casa : public Imovel {

    public:
    Casa()
    { 
        tipo = "[Casa]";
        taxaComissao= TAXA_C_CASA;
    }
    double valor() {

        double v = AREA * valorMetro2;

        return v;

    }

    double comissao() {

        double c = AREA * valorMetro2;

        return ((c * TAXA_C_CASA)/100);
        
    }



};

#endif