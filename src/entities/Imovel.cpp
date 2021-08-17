#include "Imovel.hpp"
#include "Cliente.hpp"
#include <iostream>
#include <string>

Imovel::Imovel(double area, int quartos, int banheiros, int vagas,
               double valorM2, Cliente vendedor, std::string corretor) {
  this->area = area;
  this->quartos = quartos;
  this->banheiros = banheiros;
  this->vagas = vagas;
  this->valorM2 = valorM2;
  this->vendedor = vendedor;
  this->corretor = corretor;
}

void Imovel::print() {
  std::cout << "[Vendedor]" << std::endl;
  vendedor.print();
  std::cout << "[Corretor]" << std::endl;
  std::cout << "  " + corretor << std::endl;
  std::cout << "Area: " << area << std::endl
            << "Quartos: " << quartos << std::endl
            << "Banheiros: " << banheiros << std::endl
            << "Vagas: " << vagas << std::endl
            << "Taxa de Comissão: " << taxaComissao * 100 << "%" << std::endl
            << "Valor Comissão: R$ " << std::fixed << std::setprecision(2)
            << valorComissao << std::endl
            << "Valor de Venda: R$ " << std::fixed << std::setprecision(2)
            << valorTotal << std::endl;
}

double Imovel::getValor() { return (valorM2 * area); }

double Imovel::getValorTotal() { return valorTotal; }

double Imovel::getComissao() { return valorComissao; }