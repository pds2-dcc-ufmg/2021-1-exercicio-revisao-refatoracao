#include <iostream>
#include "Casa.hpp"

double Casa::getComissao(){
  return getValor() * 0.06;
}

void Casa::print(){
  std::cout << "[Casa]" << endl;
  Imovel::print();
  std::cout << "Area: " << Area << endl
            << "  Quartos: " << Quartos << endl
            << "  Banheiros: " << Banheiros << endl
            << "  Vagas: " << Vagas << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_venda << endl;

}