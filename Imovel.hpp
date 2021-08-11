#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        const double AREA,VALORm2;
        double Valor, C; //valor do imovel, comissao
        int Q, B, V; //quartos, banheiros, vagas
        int B;
        int V;
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
