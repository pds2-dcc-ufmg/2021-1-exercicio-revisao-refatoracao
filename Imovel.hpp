#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {

    public:
        double area;
        int numeroDeQuartos;
        int numeroDeBanheiros;
        int numeroDeVagas;
        double valorMetro;
        double valorDeVenda;
        double comissao;

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