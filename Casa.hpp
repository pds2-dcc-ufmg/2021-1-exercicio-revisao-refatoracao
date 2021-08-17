#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel
{
public:
    double valor() override;
    double comissao() override;
    void print() override;
};

#endif