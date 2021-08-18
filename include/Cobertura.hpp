#ifndef COBERTURA_HPP
#define COBERTURA_HPP
#define TAXA_COMISSAO_COBERTURA 0.1

#include "Cliente.hpp"
#include "Imovel.hpp"

class Cobertura : public Imovel {

public:
  Cobertura(double area, int quartos, int banheiros, int vagas, double valorM2,
            Cliente vendedor, std::string corretor);
  void print() override;
};

#endif