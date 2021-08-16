#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 

    double valor() {
        double v = Area * Valorm2;
        return v;
    }

    double comissao() {
        double c = Area * Valorm2;
        return c * 0.04;
    }

    void print() {
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout 
            << "Area: " << Area << endl
            << "  Quartos: " << Quartos << endl
            << "  Banheiros: " << Banheiros << endl
            << "  Vagas: " << Vagas << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << PrecoVenda 
        << endl;
    }
};

#endif