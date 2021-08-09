#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Cliente.hpp"
#include "Imovel.hpp"

using namespace std;

namespace Imoveis {
class Cobertura : public Imovel {

private:
  static constexpr double TAXA_COBERTURA = 0.10;

public:
  Cobertura(const string &corretor, const double &area,
            const unsigned &numQuartos, const unsigned &numBanheiros,
            const unsigned &vagas, const double &valorPorArea,
            const Clientes::Cliente &vendedor)
      : Imovel(corretor, area, numQuartos, numBanheiros, vagas, valorPorArea,
               vendedor) {
    this->taxaComissao = TAXA_COBERTURA;
    this->tipo = "Cobertura";
  }
};
} // namespace Imoveis

#endif
