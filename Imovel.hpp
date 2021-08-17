#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel
{
public:
    double AREA;
    int Q;
    int B;
    int V;
    double VALORm2;
    double Valor;
    double C;
    Cliente vendedor;
    string corretor;

    virtual void print();
    virtual double valor();
    virtual double comissao();
};

#endif
