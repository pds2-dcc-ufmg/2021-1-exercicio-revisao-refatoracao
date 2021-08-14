#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        int numQuartos;
        int numBanheiros;
        int numVagas;
        double valorMetroQuadrado;
        double valorVenda;
        double valorComissao;
        Cliente vendedor;
        string corretor;

        void imprimeInformacoes();
};

#endif