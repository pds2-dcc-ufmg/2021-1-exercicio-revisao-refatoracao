#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    protected:
        double AREA;
        int Q;
        int B;
        int V;
        double VALORm2;
        double Valor;
        double C;
        Cliente vendedor;
        std::string corretor;

    public:
        Imovel(double area, int q, int b, int v, double valor_m2, double valor, double c, Cliente vendedor, std::string corretor) {
            AREA = area;
            Q = q;
            B = b;
            V = v;
            VALORm2 = valor_m2;
            Valor = valor;
            C = c;
            this->vendedor = vendedor;
            this->corretor = corretor;
        }

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif