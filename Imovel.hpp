#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"
#include "string.h"
using namespace std;

class Imovel {
    public:
        string tipo;
        int taxaComissao; 
        double AREA;
        int quartos;
        int banheiros;
        int vagas;
        double valorMetro2;
        double Valor;
        double C;
        Cliente vendedor;
        string corretor;

        void print() {
            std::cout << tipo << endl;
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
            std::cout << "Area: " << AREA << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << taxaComissao << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif