#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel
{
    
public:
  double area;
  int num_quarto;
  int num_banheiro;
  int num_vaga;
  double valor_m2;
  double valor_imovel;
  double valor_comissao;
  Cliente vendedor;
  string corretor;

  //Método para calcular comissao
  virtual double comissao();
  
  //Método para calcular o valor total de venda do imóvel
  virtual double valor (); 
  
  //Método para imprimir as informações do imóvel
  virtual void print();

};

#endif
