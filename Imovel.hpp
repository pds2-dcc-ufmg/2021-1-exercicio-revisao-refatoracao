#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA;
        int Quarto;
        int Banheiro;
        int Vagas;
        double VALORm2;
        double ValorTotal;
        double Comissao;
        double Taxa;
        Cliente vendedor;
        string corretor;

        double ValorImovel();
        double ValorComissão();

        void print();
};

#endif