#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA, VALORm2, Valor, C;
        int Q, B, V;
       
        /*int B;
        int V;
        double VALORm2;
        double Valor;
        double C;
        */
    
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
