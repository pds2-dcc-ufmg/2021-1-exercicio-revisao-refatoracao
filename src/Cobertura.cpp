#include <iostream>
#include <string>
#include "../headers/Cobertura.hpp"

Cobertura::Cobertura()
{
    this->setArea(0);
    this->setQuartos(0);
    this->setBanheiros(0);
    this->setVagas(0);
    this->setValorM2(0);
    this->setValorTotal(0);
    this->setValorComissao(0);
    this->setCorretor("");
    this->setTipoImovel("Cobertura");
}
double Cobertura::comissao()
{
    return this->getValorSemComissao() * 0.10;
}
