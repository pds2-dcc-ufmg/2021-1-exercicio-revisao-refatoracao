#ifndef CASA_HPP
#define CASA_HPP

#include "Cliente.hpp"
#include "Imovel.hpp"

using namespace std;

class Casa : public Imovel {

public:
  Casa(const string &corretor, const double &area, const unsigned &numQuartos,
       const unsigned &numBanheiros, const unsigned &vagas,
       const double &valorPorArea, const Cliente &vendedor)
      : Imovel(corretor, area, numQuartos, numBanheiros, vagas, valorPorArea,
               vendedor) {}
  double comissao() const override {

    double c = area * valorPorArea;

    return c * 0.06;
  }

  void print() {

    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
              << "  Quartos: " << numQuartos << endl
              << "  Banheiros: " << numBanheiros << endl
              << "  Vagas: " << vagas << endl
              << "Taxa de Comissão: " << 6 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2)
              << valorComissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda
              << endl
              << endl;
  }
};

#endif
