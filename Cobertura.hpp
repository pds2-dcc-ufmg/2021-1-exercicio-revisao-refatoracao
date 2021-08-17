#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {

    private:
    const double comissaoCobertura = 0.10;

    public:
    double valor() override;

    double comissao() override;

    void print();
};

#endif