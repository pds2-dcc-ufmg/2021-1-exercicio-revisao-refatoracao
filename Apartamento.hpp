#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Apartamento : public Imovel {
    
    public:    
    
    taxa = 4;
    
    double valor() {

        double v = AREA * VALORm2;

        return v;

    }

    double comissao() {

        return valor() * (taxa/100);
        
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        Imovel::printImov(taxa);
    }
};

#endif
