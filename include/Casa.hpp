#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {
    Casa(double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor, string corretor);
    public: 
        double comissao() override;

        void print() override;
    private:
        static constexpr double comissao_taxa = 0.06;
};

#endif