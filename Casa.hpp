#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa:public Imovel
{

private:
  //Taxa de comissão para o caso de uma venda de casa
  double tx_com_casa = 0.06;

public:
  //Calcular comissão para o caso da venda de uma casa
  double comissao() override;
  
  //Imprime os dados do imóvel
  void print () override;  

};

#endif
