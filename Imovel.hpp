#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using std::string;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

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

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif
