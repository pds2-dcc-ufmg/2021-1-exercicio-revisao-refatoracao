#include "Apartamento.hpp"

using namespace std;

  double Apartamento::valor() {
    double v = get_area_imovel() * get_valor_m2();
    return v;
  }

  double Apartamento::comissao() {
    double c = get_area_imovel() * get_valor_m2();
    return c * (get_porcentagem_comissao()/100);    
  }

  void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
  }