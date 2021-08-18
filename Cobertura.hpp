#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura:public Imovel
{

private:
  //Taxa de comissão para o caso da venda de uma cobertura
  double tx_com_cob = 0.10;

public:
  //Calculo de comissao para o caso de uma cobertura
  double comissao() override;
  
  //Impressao dos dados do imóvel
  void print () override;
  

};

#endif
