#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"


class Casa : public Imovel {

    public:
    Casa(std::string corretor, double area, int quartos, int banheiros, int vagas, double value_m2, 
            Cliente vendedor, double comissao = 0.06)
                : Imovel(corretor, area, quartos, banheiros, vagas, value_m2, vendedor) {
                    set_comissao_taxa(comissao);
    }

    void informacoes() override {

        std::cout << "[Casa]" << std::endl;
        Imovel::corretor_e_vendedor_info();
        imovel_info();
        preco_info();
    }

};

#endif