#include "Apartamento.hpp"
#include "Imovel.hpp"
#include <iostream>
#include <string>

Apartamento::Apartamento(double area, int quartos, int banheiros, int vagas,
                         double valorM2, Cliente vendedor, std::string corretor)
    : Imovel(area, quartos, banheiros, vagas, valorM2, vendedor, corretor) {
  this->taxaComissao = TAXA_COMISSAO_APARTAMENTO;
  this->valorComissao = taxaComissao * area * valorM2;
  this->valorTotal = (area * valorM2) + valorComissao;
}

void Apartamento::print() {
  std::cout << "[Apartamento]" << std::endl;
  Imovel::print();
}