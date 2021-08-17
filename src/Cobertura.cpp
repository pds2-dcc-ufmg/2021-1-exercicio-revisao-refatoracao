#include <iostream>
#include "Cobertura.hpp"

using namespace std;

  double Cobertura::valor() {
    double v = get_area_imovel() * get_valor_m2();
    return v;
  }

  double Cobertura::comissao() {
    double c = get_area_imovel() * get_valor_m2();
    return c * (get_porcentagem_comissao()/100);
  }

  void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    }