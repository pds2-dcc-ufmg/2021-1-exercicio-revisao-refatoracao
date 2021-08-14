#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {

        double v = area * valor_m2;

        return v;

    }

    double comissao() {

        double c = area * valor_m2;

        return c * 0.06;
        
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << qtd_quartos << endl
                << "  Banheiros: " << qtd_banheiros << endl
                << "  Vagas: " << qtd_vagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_venda << endl;

    }

};

#endif