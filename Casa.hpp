#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
  public:
    Casa(string _corretOR, double a, int q, int b, int v, double _valorm2, Cliente _vendedor);
    double txComissaoCasa = 0.06;
    double valor() override;
    double comissao() override;
    void print();
};

#endif