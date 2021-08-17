#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public:
    
    double Taxa_comissao=0.04;

    protected: 
    
    double valor();

    double comissao();

    void print();
};

#endif
