#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:

    double valor() {

        double v = AREA * VALORM2;

        return v;

    }

    double comissao() {

        double c = AREA * VALORM2;

        return c * 0.04;

    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Q << endl
                << "  Banheiros: " << B << endl
                << "  Vagas: " << V << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << FIXED << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << FIXED<< setprecision(2) << Valor << endl;
    }
};

#endif
