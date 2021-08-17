#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Apartamento : public Imovel
{
public:
    double valor() override;
    double comissao() override;
    void print() override;
};

#endif
