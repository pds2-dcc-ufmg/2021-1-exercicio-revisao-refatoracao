#include <iostream>
#include "Cobertura.hpp"

double Cobertura::getComissao(){
  return getValor() * 0.10;
}

void Cobertura::print(){
  std::cout << "[Cobertura]" << endl;
  Imovel::print();
  std::cout << "Area: " << Area << endl
            << "  Quartos: " << Quartos << endl
            << "  Banheiros: " << Banheiros << endl
            << "  Vagas: " << Vagas << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_venda << endl;
}