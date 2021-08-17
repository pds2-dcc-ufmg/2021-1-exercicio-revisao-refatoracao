#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double AREA;
        int Qnt_Quartos;
        int Qnt_Banheiros;
        int Qnt_Vagas;
        double VALORm2;
        double Valor_Imovel = AREA * VALORm2;
        double Valor_Venda = Valor_Imovel + comissao;
        double Perc_Comissao_Ap = 0.04;
        double Perc_Comissao_Casa = 0.06;
        double Perc_Comissao_Cobert = 0.1;
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
