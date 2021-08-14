#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    private:
        const double taxa_comissao=0.06;

    public:
        Casa(
            double area,
            int quartos,
            int banheiros,
            int vagas,
            double valor_m2,
            Cliente vendedor,
            string corretor
        );

        double valor();

        double comissao();

        void print();
};

#endif