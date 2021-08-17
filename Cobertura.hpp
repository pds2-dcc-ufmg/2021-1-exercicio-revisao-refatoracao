#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel {
    
    public:
        Cobertura(std::string corretor, double area, int quartos, int banheiros, int vagas, double value_m2, 
            Cliente vendedor, double comissao = 0.10)
                : Imovel(corretor, area, quartos, banheiros, vagas, value_m2, vendedor) {
                    set_comissao_taxa(comissao);
        }

    void informacoes() override {

        std::cout << "[Cobertura]" << std::endl;
        Imovel::corretor_e_vendedor_info();
        imovel_info();
        preco_info();
    }
};

#endif