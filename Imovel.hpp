#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA;
        int Qtos;
        int Banhos;
        int Vgs;
        double VALORm2;
        double Valor;
        double Comiss;
        Cliente vendedor;
        string corretor;

        void print() {}
};

#endif
