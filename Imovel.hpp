#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valor_m2;
        double valor;
        double comissao;
        Cliente vendedor;
        string corretor;
        int taxa_comissao;

        double get_valor();
        virtual double get_comissao();
        void print();
};

#endif