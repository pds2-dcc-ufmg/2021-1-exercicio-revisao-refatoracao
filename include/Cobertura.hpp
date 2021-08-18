#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    public:
        Cobertura(double area, int quartos, int banheiros, int vagas, double valor_m2, Cliente vendedor, string corretor);
        double comissao() override;

        void print() override;
    private:
        static constexpr double comissao_taxa = 0.1;
};

#endif