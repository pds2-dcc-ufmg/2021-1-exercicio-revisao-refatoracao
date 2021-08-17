#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valor_m2;
        double valor;
        double comissao;
        Cliente vendedor;
        string corretor;

        double getValor() {

            double valor_total = area * valor_m2;

            return valor_total;
        }

        double getComissao() {

            double comissao = area * valor_m2;

            return comissao * 0.04;
        
        }

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif