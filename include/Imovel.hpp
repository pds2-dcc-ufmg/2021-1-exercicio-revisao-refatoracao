#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {

    public:

        double AREA;
        int num_quartos;
        int num_banheiros;
        int num_vagas;
        double VALORm2;
        double Valor;
        double C;
        
        Cliente vendedor;
        string corretor;

        virtual void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }

        virtual double valor() = 0 ;
};

#endif