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
        double valor_por_metro_quadrado;
        double Valor_de_venda;
        double valor_da_comissao;
        Cliente vendedor;
        string corretor;

        void print();
        double valor();
};

#endif