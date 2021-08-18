#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include "Cliente.hpp"
#include <iomanip>
#include <iostream>

class Imovel {
protected:
  double area;
  int quartos;
  int banheiros;
  int vagas;
  double valorM2;
  double valorTotal;
  double valorComissao;
  double taxaComissao;
  Cliente vendedor;
  std::string corretor;

public:
  Imovel(double area, int quartos, int banheiros, int vagas, double valorM2,
         Cliente vendedor, std::string corretor);
  virtual void print();
  double getValor();
  double getValorTotal();
  double getComissao();
};

#endif