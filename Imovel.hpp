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
        Imovel() {};

        Imovel(std::string corretor, double area, int q, int b, int v, double valor_m2, Cliente vendedor)
            : Imovel(corretor, area, q, b, v, valor_m2, vendedor, 0) {}

        Imovel(std::string corretor, double area, int q, int b, int v, double valor_m2, Cliente vendedor, double comissao)
        : corretor(corretor),
        area(area),
        n_quartos(q),
        n_banheiros(b),
        n_vagas(v),
        preco_por_m2(valor_m2),
        vendedor(vendedor),
        comissao_taxa(comissao) 
        {
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
            std::cout << "[Vendedor]" << std::endl;
            vendedor.print();
            std::cout << "[Corretor]" << std::endl;
            std::cout << "  " + corretor << std::endl;
        }
};

#endif