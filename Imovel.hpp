#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        int numQuartos;
        int numBanheiros;
        int numVagas;
        double valorMetroQuadrado;
        double valorImovel;
        double valorComissao;
        Cliente vendedor;
        string corretor;

        void print();

        virtual double valor() = 0;

        virtual double comissao() = 0;
};

#endif