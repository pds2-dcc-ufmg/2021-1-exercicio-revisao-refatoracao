#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        Imovel(string _corretor, double _AREA, int _Q, int _B, int _V, double _VALORm2, Cliente _vendedor);
    
        double AREA;
        int Q;
        int B;
        int V;
        double VALORm2;
        double Valor;
        double C;
        double taxa;
        Cliente vendedor;
        string corretor;

        void print();
        void printImov(double t);
};

#endif
