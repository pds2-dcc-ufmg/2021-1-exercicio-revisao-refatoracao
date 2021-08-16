#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA, Valor, VALORm2, C, c;
        int Q, B, V;
        Cliente vendedor;
        string corretor;

        double valor() {return AREA * VALORm2;}

        double comissao() {return this->valor() * this->getComissao();}

        double getComissao() {return this->c;}
        void setComissao(double c) {this->c = c;}

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
            cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << this->getComissao() * 100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
        }
};

#endif