#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA;
        int qnt_quartos;
        int qnt_banheiros;
        int qnt_vagas;
        double VALORm2;
        double Valor;
        double val_comissao;
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
