#include <iostream>
#include "Cobertura.hpp"
// Define para eliminar números mágicos
#define TAXA_COMISSAO_COBERTURA 0.10

double Cobertura::getComissao(){
  return getValor() * TAXA_COMISSAO_COBERTURA;
}

void Cobertura::print(){
  std::cout << "[Cobertura]" << endl;
  Imovel::print();
  std::cout << "  Área: " << areaImovel << endl
            << "  Quartos: " << qtdQuartos << endl
            << "  Banheiros: " << qtdBanheiros << endl
            << "  Vagas: " << qtdVagas << endl
            << "  Taxa de Comissão: " << 10 << "%" << endl
            << "  Valor Comissão: R$ " << fixed << setprecision(2) << getComissao() << endl
            << "  Valor de Venda: R$ " << fixed << setprecision(2) << getComissao() + getValor() << endl;
}