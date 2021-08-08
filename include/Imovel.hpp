#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include "Cliente.hpp"
#include <iomanip>
#include <iostream>

using namespace std;

class Imovel {
public:
  double area;
  int numQuartos;
  int numBanheiros;
  int vagas;
  double valorPorArea;
  double valorVenda;
  double valorComissao;
  Cliente vendedor;
  string corretor;

  void print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
  }
};

#endif
