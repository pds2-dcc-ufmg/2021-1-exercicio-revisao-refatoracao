#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {

        double valor_casa = area * valor_m2;

        return valor_casa;

    }

    double comissao() {

        double comissao_casa = area * valor_m2;

        return comissao_casa * 0.06;
        
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao_imovel << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_total << endl;

    }

};

#endif