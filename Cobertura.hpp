#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel {
    
    public:

    void print() {

        std::cout << "[Cobertura]" << std::endl;
        Imovel::print();
        std::cout << "Area: " << area << std::endl
                << "  Quartos: " << n_quartos << std::endl
                << "  Banheiros: " << n_banheiros << std::endl
                << "  Vagas: " << n_vagas << std::endl
                << "Taxa de Comissão: " << comissao_taxa * 100 << "%" << std::endl
                << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << comissao() << std::endl
                << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << preco() << std::endl;
    }
};

#endif