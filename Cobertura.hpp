#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel {
    
    public:    
    
    taxa = 10;
    
    double valor() {

        double v = AREA * VALORm2;

        return v;

    }

    double comissao() {

        return valor() * (taxa/100);
        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        Imovel::printImov(taxa);
    }
};

#endif
