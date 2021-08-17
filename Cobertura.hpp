#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel
{
public:
    static double taxa;
    double valor() override;
    double comissao() override;
    void print() override;
};

#endif