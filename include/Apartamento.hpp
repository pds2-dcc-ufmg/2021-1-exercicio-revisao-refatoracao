#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP
#define TAXA_COMISSAO_APARTAMENTO 0.04

#include "Cliente.hpp"
#include "Imovel.hpp"

class Apartamento : public Imovel {

public:
  Apartamento(double area, int quartos, int banheiros, int vagas,
              double valorM2, Cliente vendedor, std::string corretor);
  void print() override;
};

#endif