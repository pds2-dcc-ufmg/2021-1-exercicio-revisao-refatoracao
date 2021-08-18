#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {
        double v = AREA * VALORm2;
        return v;
    }

    double comissao() {
        double c = AREA * VALORm2;
        c *= 0.06;
        return c;
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Quarto << endl
                << "  Banheiros: " << Banheiro << endl
                << "  Vagas: " << Vaga << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

    }

};

#endif