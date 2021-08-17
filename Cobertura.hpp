#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
  public:
    Cobertura(string _corretor, double a, int q, int b, int v, double _valorm2, Cliente _vendedor);
    double txComissaoCobertura = 0.10;
    double valor() override;
    double comissao() override;
    void print();
};

#endif