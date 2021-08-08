#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Cliente.hpp"
#include "Imovel.hpp"

using namespace std;

class Apartamento : public Imovel {

public:
  double valor() {

    double v = AREA * VALORm2;

    return v;
  }

  double comissao() {

    double c = AREA * VALORm2;

    return c * 0.04;
  }

  void print() {

    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << AREA << endl
              << "  Quartos: " << Q << endl
              << "  Banheiros: " << B << endl
              << "  Vagas: " << V << endl
              << "Taxa de Comissão: " << 4 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor
              << endl;
  }
};

#endif
