#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;
#define TAXA_C_CASA  6

class Casa : public Imovel {

    public:
    Casa()
    { 
        taxaComissao= TAXA_C_CASA;
    }
    double valor() {

        double v = AREA * valorMetro2;

        return v;

    }

    double comissao() {

        double c = AREA * valorMetro2;

        return ((c * TAXA_C_CASA)/100);
        
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << taxaComissao << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

    }

};

#endif