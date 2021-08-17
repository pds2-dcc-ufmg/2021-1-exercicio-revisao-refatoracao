#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    private:
        double TaxaDeComissao;

    public: 
        Apartamento();
        Apartamento(string corretor, double area, int quartos, int banheiros, int vagasnagaragem, double valorm2, Cliente vendedor, double taxadecomissao);
        ~Apartamento();

        double valor() override;
        double comissao() override;
        void print() override;
        double getTaxadecomissao();

};

#endif