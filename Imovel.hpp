#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    protected:
        double area;
        int qtd_quartos;
        int qtd_banheiros;
        int qtd_vagas;
        double valor_m2;
        double valor_venda;
        double valor_comissao;
        double taxa_comissao;
        Cliente vendedor;
        string corretor;

    public:
        double getValor() { return area * valor_m2; }
        double getComissao() { return area * valor_m2 * taxa_comissao; }

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;

            cout << "Area: " << area << endl
                << "  Quartos: " << qtd_quartos << endl
                << "  Banheiros: " << qtd_banheiros << endl
                << "  Vagas: " << qtd_vagas << endl
                << "Taxa de Comissão: " << fixed << setprecision(0) << taxa_comissao*100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_venda << endl;
        }
};

#endif