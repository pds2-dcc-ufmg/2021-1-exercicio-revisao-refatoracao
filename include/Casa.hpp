#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {

        double v = area * valorMetroQuadrado;

        return v;

    }

    double calcularComissao() {

        double c = area * valorMetroQuadrado;

        return c * 0.06;
        
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << numeroQuartos << endl
                << "  Banheiros: " << numeroBanheiros << endl
                << "  Vagas: " << numeroVagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << calcularComissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda << endl;

    }

};

#endif