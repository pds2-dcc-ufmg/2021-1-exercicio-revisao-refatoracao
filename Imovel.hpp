#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA;
        int Num_Quartos;
        int Num_Banheiros;
        int Num_vagas;
        double VALORm2;
        double Valor;
        double Valor_Comissao;
        Cliente vendedor;
        string corretor;

        void print() {}
};

#endif
