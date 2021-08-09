#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include "Cliente.hpp"
#include <iomanip>
#include <iostream>

using namespace std;

static constexpr unsigned precisao = 2;

class Imovel {
protected:
  string corretor;
  double area;
  unsigned numQuartos;
  unsigned numBanheiros;
  unsigned vagas;
  double valorPorArea;
  Cliente vendedor;
  double taxaComissao;
  string tipo;

public:
  Imovel(const string &corretor, const double &area, const unsigned &numQuartos,
         const unsigned &numBanheiros, const unsigned &vagas,
         const double &valorPorArea, const Cliente &vendedor)
      : corretor(corretor), area(area), numQuartos(numQuartos),
        numBanheiros(numBanheiros), vagas(vagas), valorPorArea(valorPorArea),
        vendedor(vendedor) {}

  // Optei por implementar essas funções no header mesmo, por serem muito curtas
  double getValor() const { return this->area * this->valorPorArea; }
  double getComissao() const { return this->getValor() * this->taxaComissao; }
  double getVenda() const { return this->getComissao() + this->getValor(); }
  string getTipo() const { return this->tipo; }

  void print() const;
};

#endif
