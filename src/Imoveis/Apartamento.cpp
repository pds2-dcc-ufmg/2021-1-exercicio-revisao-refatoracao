#include <iostream>
#include "Apartamento.hpp"
// Define para eliminar números mágicos
#define TAXA_COMISSAO_APARTAMENTO 0.04

double Apartamento::getComissao(){
  return getValor() * TAXA_COMISSAO_APARTAMENTO;
}

void Apartamento::print(){
  std::cout << "[Apartamento]" << endl;
  Imovel::print();
  std::cout << "  Área: " << areaImovel << endl
            << "  Quartos: " << qtdQuartos << endl
            << "  Banheiros: " << qtdBanheiros << endl
            << "  Vagas: " << qtdVagas << endl
            << "  Taxa de Comissão: " << 4 << "%" << endl
            << "  Valor Comissão: R$ " << fixed << setprecision(2) << getComissao() << endl
            << "  Valor de Venda: R$ " << fixed << setprecision(2) << getComissao() + getValor() << endl;
}