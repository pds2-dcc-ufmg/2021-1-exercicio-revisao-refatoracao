#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

class Imovel
{
    double valor() const = 0;
    double comissao() const = 0;

    void print()
    {
        std::cout << "[Vendedor]" << std::endl;
        vendedor.print();
        std::cout << "[Corretor]" << std::endl;
    }
};
