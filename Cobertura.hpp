#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    private:
        const double taxa_comissao=0.10;

    public:
        Cobertura(
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