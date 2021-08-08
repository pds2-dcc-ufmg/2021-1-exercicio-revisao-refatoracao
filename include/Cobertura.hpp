#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Cliente.hpp"
#include "Imovel.hpp"
using namespace std;

class Cobertura : public Imovel {

public:
  double valor() {

    double v = area * valorPorArea;

    return v;
  }

  double comissao() {

    double c = area * valorPorArea;

    return c * 0.10;
  }

  void print() {

    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
              << "  Quartos: " << numQuartos << endl
              << "  Banheiros: " << numBanheiros << endl
              << "  Vagas: " << vagas << endl
              << "Taxa de Comissão: " << 10 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2)
              << valorComissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda
              << endl;
  }
};

#endif
