#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {
    private:
    const double FatorComissao = 0.06;
    /* int QuantidadeCasas = 0; */

    public:
    Casa();

    double ValorTotalM2() override;

    void ValorComissao() override;
    
    void ValorVenda() override;
    
    void print() override;
    
    /* void IncrementarQuantidade() override;
    
    int Quantidade() override; */

};

#endif