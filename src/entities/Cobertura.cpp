#include "Cobertura.hpp"
#include "Imovel.hpp"
#include <iostream>
#include <string>

Cobertura::Cobertura(double area, int quartos, int banheiros, int vagas,
                     double valorM2, Cliente vendedor, std::string corretor)
    : Imovel(area, quartos, banheiros, vagas, valorM2, vendedor, corretor) {
  this->taxaComissao = TAXA_COMISSAO_COBERTURA;
  this->valorComissao = taxaComissao * area * valorM2;
  this->valorTotal = (area * valorM2) + valorComissao;
}

void Cobertura::print() {
  std::cout << "[Cobertura]" << std::endl;
  Imovel::print();
}