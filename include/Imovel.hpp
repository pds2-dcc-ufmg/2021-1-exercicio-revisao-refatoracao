#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    protected:
        double area;
        int quarto;
        int banheiro;
        int vaga;
        double VALORm2;
        double Valor;
        double C;
        Cliente vendedor;
        string corretor;
    
    public:
        double valor();
        void print();
};

#endif