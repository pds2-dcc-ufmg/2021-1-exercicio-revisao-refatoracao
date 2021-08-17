#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA;
        int numero_quartos;
        int numero_banheiros;
        int numero_vagas;
        double VALORm2;
        double Valor;
        double valor_comissao;
        Cliente vendedor;
        string corretor;

        void print();
};

#endif