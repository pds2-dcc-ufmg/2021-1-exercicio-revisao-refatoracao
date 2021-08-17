#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
#include <string>

class Imovel {
    public:
        double Area;
        int Quartos;
        int Banheiros;
        int Vagas;
        double Valor_do_m2;
        Cliente vendedor;
        string corretor;
        double Comissao;
        double valorVenda;
        double taxa;

        double getValor();

        double getComissao();

        void print();
};

#endif