#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {

    protected:

    double tax=0.06;
    int print_tax=6;
    
    public:

    double valor();

    double comissao();

    void print();

};

#endif