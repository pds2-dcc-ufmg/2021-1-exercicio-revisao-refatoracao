#ifndef CASA_HPP
#define CASA_HPP

#include "Cliente.hpp"
#include "Imovel.hpp"

using namespace std;

class Casa : public Imovel {

private:
  static constexpr double TAXA_CASA = 0.06;

public:
  Casa(const string &corretor, const double &area, const unsigned &numQuartos,
       const unsigned &numBanheiros, const unsigned &vagas,
       const double &valorPorArea, const Cliente &vendedor)
      : Imovel(corretor, area, numQuartos, numBanheiros, vagas, valorPorArea,
               vendedor) {
    this->taxaComissao = TAXA_CASA;
    this->tipo = "Casa";
  }
};

#endif
