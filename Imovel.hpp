#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    protected:
        double area;
        int n_quartos;
        int n_banheiros;
        int n_vagas;
        double preco_por_m2;
        double preco;
        double comissao;
        Cliente vendedor;
        std::string corretor;

    public:
        Imovel(double area, int q, int b, int v, double valor_m2, double price, double c, Cliente vendedor, std::string corretor) {
            this->area = area;
            n_quartos = q;
            n_banheiros = b;
            n_vagas = v;
            preco_por_m2 = valor_m2;
            preco = price;
            comissao = c;
            this->vendedor = vendedor;
            this->corretor = corretor;
        }

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif