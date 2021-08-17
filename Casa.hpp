#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {
    
    public:    
    
    Casa(string _corretor, double _AREA, int _Q, int _B, int _V, double _VALORm2, Cliente _vendedor){
                                 
        corretor = _corretor; 
        AREA = _AREA; 
        Q = _Q;
        B = _B; 
        V = _V;
        VALORm2 = _VALORm2;
        vendedor = _vendedor;
        taxa = 6;
    }
    
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
        Imovel::printImov();
    }
};

#endif
