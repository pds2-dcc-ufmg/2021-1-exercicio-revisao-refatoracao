#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

/* Esta subclasse representa um tipo de imóvel, no caso, uma cobertura */
class Cobertura : public Imovel {

    private:
    const double COMISSAOCOBERTURA = 0.10;

    public:
    double valor() override;

    double comissao() override;

    void imprimeCobertura();
};

#endif