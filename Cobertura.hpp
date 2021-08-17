#ifndef COBERTURA_H
#define COBERTURA_H

#include "Imovel.hpp"
#include "Cliente.hpp"

class Cobertura : public Imovel
{

public:
    double valorTotalDaArea()
    {
        double valorTotal = area * valor_m2;

        return valorTotal;
    }

    double comissaoTotal()
    {

        double c = area * valor_m2;
        double comissaoTotal = c * 0.10;

        return comissaoTotal;
    }

    void print()
    {

        std::cout << "[Cobertura]" << std::endl;
        Imovel::print();
        std::cout << "Area: " << area << std::endl
                  << "Quartos: " << quartos << std::endl
                  << "Banheiros: " << banheiros << std::endl
                  << "Vagas: " << vagas << std::endl
                  << "Taxa de Comissão: " << 10 << "%" << std::endl
                  << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << comissão << std::endl
                  << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << valor << std::endl;
    }
};

#endif