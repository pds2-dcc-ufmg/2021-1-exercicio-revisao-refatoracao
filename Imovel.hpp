#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel 
{
    public:
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valorM2;
        double valorVenda;
        double valorComissao;
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
