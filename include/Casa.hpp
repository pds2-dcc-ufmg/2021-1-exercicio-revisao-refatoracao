#ifndef CASA_HPP
#define CASA_HPP
#define TAXA_COMISSAO_CASA 0.06

#include "Cliente.hpp"
#include "Imovel.hpp"

using namespace std;

class Casa : public Imovel {

public:
  Casa(double area, int quartos, int banheiros, int vagas, double valorM2,
       Cliente vendedor, std::string corretor);
  void print();
};

#endif