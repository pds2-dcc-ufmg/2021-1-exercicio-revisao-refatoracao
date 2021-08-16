#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {

    public:
    Casa();

    double ValorTotalM2() override;

    double ValorComissao() override;

    double ValorVenda() override;

    void print() override;

    /* void IncrementarQuantidade() override;
    
    int Quantidade() override; */


    private:
    const double FatorComissao = 0.06;
    /* int QuantidadeCasas = 0; */
};

#endif