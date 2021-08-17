#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Imovel.hpp"
#include "Cliente.hpp"

class Apartamento : public Imovel
{

public:
    double valorTotalDaArea()
    {
        double valorTotal = area * valor_m2;

        return valorTotal;
    }

    double comissaoTotal()
    {

        double comissao = area * valor_m2;
        double comissaoTotal = comissao * 0.04;

        return comissaoTotal;
    }

    void print()
    {

        std::cout << "[Apartamento]" << std::endl;
        Imovel::print();
        std::cout << "Area: " << area << std::endl
                  << "  Quartos: " << quartos << std::endl
                  << "  Banheiros: " << banheiros << std::endl
                  << "  Vagas: " << vagas << std::endl
                  << "Taxa de Comissão: " << 4 << "%" << std::endl
                  << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << comissão << std::endl
                  << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << valor << std::endl;
    }
};

#endif