#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {
    
    public:    
    
    taxa = 6;
    
    double valor() {

        double v = AREA * VALORm2;

        return v;

    }

    double comissao() {

        return valor() * (taxa/100);
        
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        Imovel::printImov(taxa);
    }
};

#endif
