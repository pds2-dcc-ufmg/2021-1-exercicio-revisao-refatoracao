#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using std::fixed;
using std::setprecision;

class Imovel {

    public:
        double area;
        int numeroDeQuartos;
        int numeroDeBanheiros;
        int numeroDeVagas;
        double valorMetro;
        double valorDeVenda;
        double comissao;

        Cliente vendedor;
        string corretor;

        double calculaValor();
        virtual double calculaComissao();

        virtual void print() {}
};

class Cobertura : public Imovel {
    public:

    double calculaComissao() override {}
    void print() override {}
};

class Casa : public Imovel {
    public:

    double calculaComissao() override {}
    void print() override {}
};

class Apartamento : public Imovel {
    public: 

    double calculaComissao() override {}
    void print() override {}
};

#endif