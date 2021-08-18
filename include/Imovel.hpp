#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    protected:
        double area;
        int quantidadeQuartos;
        int quantidadeBanheiros;
        int quantidadeVagas;
        double valorM2;
        double valorVenda;
        double valorComissao;
        Cliente vendedor;
        string corretor;

    public:
        void setImovel(double _area, int _quantidadeQuartos, int _quantidadeBanheiros, int _quantidadeVagas, 
                       double _valorM2, double _valorVenda, double _valorComissao, Cliente _vendedor, 
                       string _corretor);

        void print();
};

#endif