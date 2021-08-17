#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {

    public:

        double AREA;
        double VALORm2;
        double Valor;
        double C;
        int Q;
        int B;
        int V;
        
        Cliente vendedor;
        string corretor;

        void print() {
            std::cout << "[Vendedor]"    << std::endl;
            vendedor.print();
            std::cout << "[Corretor]"    << std::endl;
            std::cout << "  " + corretor << std::endl;
        }

        double valor_area() {
            return this->AREA * this->VALORm2;
        }
};

#endif