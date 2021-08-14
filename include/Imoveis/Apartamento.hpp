#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

const double TAXA_COMISSAO_APT = 0.04; 

class Apartamento : public Imovel {
    public: 

    Apartamento(int quartos,
               int banheiros,
               int vagas,
               double area,
               double valor_m2,
               Cliente vendedor,
               std::string corretor);

    void print();
};

#endif