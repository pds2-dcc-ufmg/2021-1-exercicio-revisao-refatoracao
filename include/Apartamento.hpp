#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
#include <iostream>

using namespace std;

class Apartamento : public Imovel {
  public: 
  double valor();
  double comissao();
  void print();
};
#endif