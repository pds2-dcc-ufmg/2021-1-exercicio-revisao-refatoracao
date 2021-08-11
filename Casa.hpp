#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
#define TAXA_COMISSAO 0.06

using namespace std;

class Casa : public Imovel {

    public:

    double valor();
    double comissao();
    void print();
};

#endif
