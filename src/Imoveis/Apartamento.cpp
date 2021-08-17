#include <iostream>
#include "Apartamento.hpp"

double Apartamento::getComissao(){
  return getValor() * 0.04;
}

void Apartamento::print(){
  std::cout << "[Apartamento]" << endl;
  Imovel::print();
  std::cout << "Area: " << Area << endl
            << "  Quartos: " << Quartos << endl
            << "  Banheiros: " << Banheiros << endl
            << "  Vagas: " << Vagas << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao  << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_venda << endl;
}