#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA,VALORm2, Valor, C; //C: comissao
        int Q, B, V; //quartos, banheiros, vagas
        Cliente vendedor;
        string corretor;

        void print() {
            std:: cout << "[Vendedor]" << std::endl;
            vendedor.print();
            std::cout << "[Corretor]" << std::endl;
            std::cout << "  " + corretor << std::endl;
        }
};

#endif
