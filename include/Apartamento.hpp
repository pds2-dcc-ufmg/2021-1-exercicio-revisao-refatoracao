#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public: 
        Apartamento(double area, int quartos, int banheiros, int vagas, double valor_m2, double valor_venda, double valor_comissao, Cliente vendedor, string corretor);
        double comissao() override;

        void print() override;
    private:
        static constexpr double comissao_taxa = 0.04;
};

#endif