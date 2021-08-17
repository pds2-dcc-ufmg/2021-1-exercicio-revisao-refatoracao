#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel {

    protected:

    double tax=0.1;
    int print_tax=10;
    
    public:

    double valor();

    double comissao();

    void print();
};

#endif