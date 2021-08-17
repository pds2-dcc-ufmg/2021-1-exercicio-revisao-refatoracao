#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"


class Casa : public Imovel {

    public:
    Casa(std::string corretor, double area, int quartos, int banheiros, int vagas, double value_m2, 
            Cliente vendedor, double comissao = 0.10)
                : Imovel(corretor, area, quartos, banheiros, vagas, value_m2, vendedor) {
                    set_comissao_taxa(comissao);
    }

    void print() {

        std::cout << "[Casa]" << std::endl;
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