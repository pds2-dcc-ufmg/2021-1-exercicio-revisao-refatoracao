#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Apartamento : public Imovel {

    public: 

    double comissao() {
        return valor() * (double)taxa_comissao_ap / 100;
    }

    void print() {
        std::cout << "[Apartamento]" << std::endl;
        Imovel::print();
        std::cout << "Area: "              << area                << std::endl
                  << "  Quartos: "         << quartos             << std::endl
                  << "  Banheiros: "       << banheiros           << std::endl
                  << "  Vagas: "           << vagas               << std::endl
                  << "Taxa de Comissão: "  << taxa_comissao_ap    << "%"                  << std::endl
                  << "Valor Comissão: R$ " << std::fixed          << std::setprecision(2) << comissao_i << std::endl
                  << "Valor de Venda: R$ " << std::fixed          << std::setprecision(2) << valor_i    << std::endl;
    }
};

#endif