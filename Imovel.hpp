#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA;
        int Q;
        int B;
        int V;
        double VALORm2;
        double Valor;
        double C;
        Cliente vendedor;
        string corretor;

        double valor() {
            double v = AREA * VALORm2;
            return v;
        }

        
        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif