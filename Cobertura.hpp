#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
#define TAXA_COMISSAO 0.10

using namespace std;

class Casa : public Imovel {

    public:

    double valor();
    double comissao();
    void print();
};

#endif
