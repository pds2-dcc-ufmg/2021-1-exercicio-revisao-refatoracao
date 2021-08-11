#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
#define TAXA_COMISSAO_COB 0.10

using namespace std;

class Cobertura : public Imovel {

    public:

    double valor();
    double comissao();
    void print();
};

#endif
