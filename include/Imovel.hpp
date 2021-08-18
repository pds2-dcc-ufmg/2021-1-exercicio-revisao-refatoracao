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
        double valorM2;
        double valorImovel;
        double comissao;
        Cliente vendedor;
        string corretor;



        double CalcularValor();

        void Print();
};

#endif