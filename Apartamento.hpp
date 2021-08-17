#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Apartamento : public Imovel {

    public: 
    
    double valor() {
        return valor_area();
    }

    double comissao() {
        return valor_area() * 0.04;
    }

    void print() {
        std::cout << "[Apartamento]" << std::endl;
        Imovel::print();
        std::cout << "Area: "              << AREA  << std::endl
                  << "  Quartos: "         << Q     << std::endl
                  << "  Banheiros: "       << B     << std::endl
                  << "  Vagas: "           << V     << std::endl
                  << "Taxa de Comissão: "  << 4     << "%"             << std::endl
                  << "Valor Comissão: R$ " << fixed << setprecision(2) << C     << std::endl
                  << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << std::endl;
    }
};

#endif