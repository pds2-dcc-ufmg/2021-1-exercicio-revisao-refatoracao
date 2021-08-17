#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    private:
    const double comissaoCasa = 0.06;

    public:

    double valor() override;

    double comissao() override;

    void print();

};

#endif