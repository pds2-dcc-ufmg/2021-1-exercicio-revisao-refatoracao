#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel {
    
    public:

    double comissao() {
        return valor() * (double)taxa_comissao_cobertura / 100;
    }

    void print() {

        std::cout << "[Cobertura]" << std::endl;
        Imovel::print();
        std::cout << "Area: "              << area        << std::endl
                  << "  Quartos: "         << quartos     << std::endl
                  << "  Banheiros: "       << banheiros   << std::endl
                  << "  Vagas: "           << vagas       << std::endl 
                  << "Taxa de Comissão: "  << taxa_comissao_cobertura    << "%"                 << std::endl
                  << "Valor Comissão: R$ " << std::fixed  << std::setprecision(2) << comissao_i << std::endl
                  << "Valor de Venda: R$ " << std::fixed  << std::setprecision(2) << valor_i    << std::endl;
    }
};

#endif