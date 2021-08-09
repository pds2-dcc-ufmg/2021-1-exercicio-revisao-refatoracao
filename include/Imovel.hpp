#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include "Cliente.hpp"
#include <iomanip>
#include <iostream>

using namespace std;

class Imovel {
protected:
  static constexpr unsigned precisao = 2;
  string corretor;
  double area;
  unsigned numQuartos;
  unsigned numBanheiros;
  unsigned vagas;
  double valorPorArea;
  Cliente vendedor;
  double valorComissao;
  double valorVenda;
  double taxaComissao;
  string tipo;

public:
  Imovel(const string &corretor, const double &area, const unsigned &numQuartos,
         const unsigned &numBanheiros, const unsigned &vagas,
         const double &valorPorArea, const Cliente &vendedor)
      : corretor(corretor), area(area), numQuartos(numQuartos),
        numBanheiros(numBanheiros), vagas(vagas), valorPorArea(valorPorArea),
        vendedor(vendedor) {
    this->valorComissao = this->comissao();
    this->valorVenda = this->comissao() + this->valor();
  }

  double valor() const { return this->area * this->valorPorArea; }
  double comissao() const { return this->valor() * this->taxaComissao; }

  void print() const;
};

#endif
