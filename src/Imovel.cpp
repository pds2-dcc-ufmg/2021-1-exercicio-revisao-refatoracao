#include <iostream>
#include <string>
#include "Imovel.hpp"
#include "Cliente.hpp"

double Imovel::getValor() {
  return Area * Valor_por_m2;
}

double Imovel::getComissao(){
  return 0;
}

void Imovel::print(){
  cout << "[Vendedor]" << endl;
  vendedor.print();
  cout << "[Corretor]" << endl;
  cout << "  " + corretor << endl;
}