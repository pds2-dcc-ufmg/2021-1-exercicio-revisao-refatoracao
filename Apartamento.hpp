#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel 
{
    public: 
    double valor() 
    {
        double v = area * valorM2;

        return v;
    }

    double comissao() 
    {
        double c = area * valorM2;

        return c * 0.04;
    }

    void print() 
    {
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda << endl;
    }
};
#endif
