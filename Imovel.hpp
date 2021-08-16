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
        double comissao_taxa;
        Cliente vendedor;
        std::string corretor;

    public:
        Imovel(double area, int q, int b, int v, double valor_m2, double c, Cliente vendedor, std::string corretor) {
            this->area = area;
            n_quartos = q;
            n_banheiros = b;
            n_vagas = v;
            preco_por_m2 = valor_m2;
            comissao_taxa = c;
            this->vendedor = vendedor;
            this->corretor = corretor;
        }

        double preco() {
            return valor() + comissao();
        }

        void set_comissao_taxa(double comissao) {
            comissao_taxa = comissao;
        }

        virtual double valor() {
            return area * preco_por_m2;
        }
        
        virtual double comissao() {
            return comissao_taxa * valor();
        }

        void print() {
            cout << "[Vendedor]" << endl;
            vendedor.print();
            cout << "[Corretor]" << endl;
            cout << "  " + corretor << endl;
        }
};

#endif