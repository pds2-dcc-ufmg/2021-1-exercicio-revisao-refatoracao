#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double _area;
        int _quartos;
        int _banheiros;
        int _vagas;
        double _valorMetroQuadrado;
        Cliente _vendedor;
        string _corretor;

        double calculaValorImovel() {

            double valorImovel = _area * _valorMetroQuadrado;

            return valorImovel;

        }

        Imovel(double area, int quartos, int banheiros, 
                int vagas, double valorMetroQuadrado, 
                Cliente vendedor, string corretor);

        void print();
};

#endif