#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel {

    public:

    double valor() {
        return Area * Valorm2;
    }

    double comissao() {
        double c = Area * Valorm2;
        return c * 0.06;  
        /* (AREA * VALORm2) * FatorComissão; */
    }

    void print() {
        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout 
            << "Area: " << Area << endl
            << "  Quartos: " << Quartos << endl
            << "  Banheiros: " << Banheiros << endl
            << "  Vagas: " << Vagas << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << ValorImovel 
        << std::endl;
    }
    private:
    const double FatorComissao = 0.06;
};

#endif