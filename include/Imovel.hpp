#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include "Cliente.hpp"
#include <iomanip>
#include <iostream>

using namespace std;

class Imovel {
public:
  double AREA;
  int Q;
  int B;
  int V;
  double VALORm2;
  double Valor;
  double C;
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
