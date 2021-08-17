#ifndef CASA_H
#define CASA_H

#include "Imovel.hpp"
#include "Cliente.hpp"

class Casa : public Imovel
{

public:
    double valorTotalDaArea()
    {
        double valorTotal = area * valor_m2;

        return valorTotal;
    }

    double comissaoTotal()
    {
        double comissão = area * valor_m2;
        double comissaoTotal = comissão * 0.06;

        return comissaoTotal;
    }

    void print()
    {

        std::cout << "[Casa]" << std::endl;
        Imovel::print();
        std::cout << "Area: " << area << std::endl
                  << "Quartos: " << quartos << std::endl
                  << "Banheiros: " << banheiros << std::endl
                  << "Vagas: " << vagas << std::endl
                  << "Taxa de Comissão: " << 6 << "%" << std::endl
                  << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << comissão << std::endl
                  << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << valor << std::endl;
    }
};

#endif