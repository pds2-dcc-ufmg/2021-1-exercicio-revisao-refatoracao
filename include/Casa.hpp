#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    private:
        double TaxaDeComissao;
    public:
        Casa();
        Casa(string corretor, double area, int quartos, int banheiros, int vagasnagaragem, double valorm2, Cliente vendedor, double taxadecomissao);
        ~Casa();
        double valor() override;
        double comissao() override;
        void print() override;
        double getTaxadecomissao();
};

#endif