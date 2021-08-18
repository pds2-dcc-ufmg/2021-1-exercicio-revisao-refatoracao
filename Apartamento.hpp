#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento:public Imovel
{

private:
  //Taxa de comissão para o caso do apartamento
  double tx_com_apt = 0.04;

public:
  //Método para calcular a comissão do apartamento
  double comissao() override;
  
  //Método para imprimir os dados do imóvel
  void print () override;  
};

#endif
