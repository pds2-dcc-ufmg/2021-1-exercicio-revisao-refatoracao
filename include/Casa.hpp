#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

/* Esta subclasse representa um tipo de imóvel, no caso, uma casa.*/
class Casa : public Imovel {

    private:
    const double COMISSAOCASA = 0.06;

    public:

    double valor() override;

    double comissao() override;

    void imprimeCasa();

};

#endif