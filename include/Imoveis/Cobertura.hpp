#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

const double TAXA_COMISSAO_COBERTURA = 0.1;

class Cobertura : public Imovel {    
    public:
        Cobertura(int quartos,
                  int banheiros,
                  int vagas,
                  double area,
                  double valor_m2,
                  Cliente vendedor,
                  std::string corretor);

        void print();
};

#endif