#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel {
    
    public:

    double valor() override;
    double comissao() override;
    void print() override;

};

#endif