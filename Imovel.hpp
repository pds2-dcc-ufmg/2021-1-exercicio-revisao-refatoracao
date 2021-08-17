#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA;
        int Quartos;
        int Banheiros;
        int Vagas;
        double VALORm2;
        double Valor;
        double Comissao;
        Cliente vendedor;
        string corretor;
        double taxa_corretagem;
        virtual double valor();
        virtual double comissao();
        virtual double ValorFinal();

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif