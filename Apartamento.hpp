#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"


class Apartamento : public Imovel {

    protected:
    
    double tax= 0.04;
    int print_tax=4;

    public: 
    
    double valor();

    double comissao();

    void print();
};

#endif