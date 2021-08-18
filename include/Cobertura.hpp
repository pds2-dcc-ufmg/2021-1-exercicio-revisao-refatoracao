#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"


class Cobertura : public Imovel {
    
    public:

    double taxaComissao = 0.10;
    double CalcularComissao();

    void Print();
};

#endif