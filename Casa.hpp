#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {

    public:

    double valor() {
        return valor_area();
    }

    double comissao() {
        return valor_area() * 0.06;
    }

    void print() {

        std::cout << "[Casa]" << std::endl;
        Imovel::print();
        std::cout << "Area: "              << AREA  << std::endl
                  << "  Quartos: "         << Q     << std::endl
                  << "  Banheiros: "       << B     << std::endl
                  << "  Vagas: "           << V     << std::endl
                  << "Taxa de Comissão: "  << 6     << "%"             << std::endl
                  << "Valor Comissão: R$ " << fixed << setprecision(2) << C     << std::endl
                  << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << std::endl;

    }

};

#endif