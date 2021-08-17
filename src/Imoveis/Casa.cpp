#include <iostream>
#include "Casa.hpp"
// Define para eliminar números mágicos
#define TAXA_COMISSAO_CASA 0.06

double Casa::getComissao(){
  return getValor() * TAXA_COMISSAO_CASA;
}

void Casa::print(){
  std::cout << "[Casa]" << endl;
  Imovel::print();
  std::cout << "  Área: " << areaImovel << endl
            << "  Quartos: " << qtdQuartos << endl
            << "  Banheiros: " << qtdBanheiros << endl
            << "  Vagas: " << qtdVagas << endl
            << "  Taxa de Comissão: " << 6 << "%" << endl
            << "  Valor Comissão: R$ " << fixed << setprecision(2) << getComissao() << endl
            << "  Valor de Venda: R$ " << fixed << setprecision(2) << getComissao() + getValor() << endl;
}