#include <iostream>
#include "Casa.hpp"

using namespace std;

  double Casa::valor() {
    double v = get_area_imovel() * get_valor_m2();
    return v;
  }

  double Casa::comissao() {
    double c = get_area_imovel() * get_valor_m2();
    return c * (get_porcentagem_comissao()/100);    
  }

  void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
  }