#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {
    protected:
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valor_m2;
        double valor_venda;
        double valor_comissao;
        Cliente vendedor;
        string corretor;

    public:
        virtual void print() {
            std::cout << "[Vendedor]" << std::endl;
            vendedor.print();
            std::cout << "[Corretor]" << std::endl;
            std::cout << "  " + corretor << std::endl;
        }
        double valor() {
            double valor = area * valor_m2;

            return valor;
        }
        virtual double comissao();
};

#endif