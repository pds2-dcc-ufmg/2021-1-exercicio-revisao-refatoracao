#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel {
    
    public:

    double valor() {
        return (AREA * VALORm2);
    }

    double comissao() {
        double c = valor();
        return (c * 0.10);
    }

    void print() {

        std::cout << "[Cobertura]" << std::endl;
        Imovel::print();
        std::cout << "Area: " << AREA << std::endl
                << "  Quartos: " << Q << std::endl
                << "  Banheiros: " << B << std::endl
                << "  Vagas: " << V << std::endl
                << "Taxa de Comissão: " << 10 << "%" << std::endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << std::endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << std::endl;
    }
};

#endif