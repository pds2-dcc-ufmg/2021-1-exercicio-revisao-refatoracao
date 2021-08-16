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

        virtual double comissao(){}

        void set_Imovel(string _corretor, double _AREA, int _Q, int _B, int _V,
        double _VALORm2, double _C, double _Valor, Cliente _vendedor){
            corretor = _corretor;
            AREA = _AREA;
            Q = _Q;
            B = _B;
            V = _V;
            VALORm2 = _VALORm2;
            C = this->comissao();
            Valor = this->valor() + C;
            vendedor = _vendedor;
        }

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif