#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        int Banheiros;
        int Quartos;
        int Vagas;
        double VALORm2;
        double ValorImovel;
        double ComissaoValor;
        Cliente vendedor;
        string corretor;

        void print();

        virtual double valor() = 0;

        virtual double comissao() = 0;
};

#endif