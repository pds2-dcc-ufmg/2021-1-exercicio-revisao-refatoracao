#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        int q;
        int b;
        int v;
        double valor_m2;
        double valor;
        double c;
        Cliente vendedor;
        string corretor;
        
        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
        
        virtual double valor();
            
        virtual double comissao();
};

#endif
