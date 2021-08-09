#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Cliente.hpp"
#include "Imovel.hpp"

using namespace std;

class Apartamento : public Imovel {

private:
  static constexpr double TAXA_APARTAMENTO = 0.04;

public:
  Apartamento(const string &corretor, const double &area,
              const unsigned &numQuartos, const unsigned &numBanheiros,
              const unsigned &vagas, const double &valorPorArea,
              const Cliente &vendedor)
      : Imovel(corretor, area, numQuartos, numBanheiros, vagas, valorPorArea,
               vendedor) {
    this->taxaComissao = TAXA_APARTAMENTO;
    this->tipo = "Apartamento";
  }
};

#endif
