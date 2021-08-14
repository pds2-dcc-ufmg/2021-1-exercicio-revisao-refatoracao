#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

const double TAXA_COMISSAO_CASA = 0.06;

class Casa : public Imovel {
    public:

    Casa(int quartos,
        int banheiros,
        int vagas,
        double area,
        double valor_m2,
        Cliente vendedor,
        std::string corretor);

    void print();

};

#endif