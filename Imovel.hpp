#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    public:
        double AREA;
        int Q;
        int B;
        int V;
        double VALORm2;
        double Valor;
        double C;
        Cliente vendedor;
        std::string corretor;

        virtual double valor() = 0; 
        virtual double comissao() = 0; 
        virtual void print();
        virtual ~Imovel() {}

};

#endif