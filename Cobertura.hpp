#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double valor();
    double comissao();
    void print();

    protected:

    double taxa_comissao = 0.10;

};

#endif