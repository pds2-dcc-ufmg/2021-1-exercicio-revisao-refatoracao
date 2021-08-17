#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    private:
        double TaxaDeComissao;
    public:
        Cobertura();
        Cobertura(string corretor, double area, int quartos, int banheiros, int vagasnagaragem, double valorm2, Cliente vendedor, double taxadecomissao);
        ~Cobertura();

        double valor() override;
        double comissao() override;
        void print() override;
        double getTaxadecomissao();

};

#endif