#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel {

    public:

        double area;
        double valor_m2;
        double valor_i;
        double comissao_i;
        int quartos;
        int banheiros;
        int vagas;
        int taxa_comissao_ap = 4;
        int taxa_comissao_cobertura = 10;
        int taxa_comissao_casa = 6;
        
        Cliente vendedor;
        std::string corretor;

        void print() {
            std::cout << "[Vendedor]"    << std::endl;
            vendedor.print();
            std::cout << "[Corretor]"    << std::endl;
            std::cout << "  " + corretor << std::endl;
        }

        double valor() {
            return this->area * this->valor_m2;
        }
        
};

#endif