#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Entities/Pessoa/Pessoa.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valorM2;
        double valor;
        double comisao;
        Pessoa vendedor;
        std::string corretor;

        virtual void print();

        virtual double getTaxaComissao() = 0;

        double comissao() {
            return valor() * getTaxaComissao();
        }

        double valor() const {
            return area * valorM2;
        }
};

#endif