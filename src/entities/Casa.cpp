#include "Casa.hpp"
#include "Imovel.hpp"
#include <iostream>
#include <string>

Casa::Casa(double area, int quartos, int banheiros, int vagas, double valorM2,
           Cliente vendedor, std::string corretor)
    : Imovel(area, quartos, banheiros, vagas, valorM2, vendedor, corretor) {
  this->taxaComissao = TAXA_COMISSAO_CASA;
  this->valorComissao = taxaComissao * area * valorM2;
  this->valorTotal = (area * valorM2) + valorComissao;
}

void Casa::print() {
  std::cout << "[Casa]" << std::endl;
  Imovel::print();
}