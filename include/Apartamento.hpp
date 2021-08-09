#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:
    Apartamento() {
        this->percentualComissao = 0.04;
    }
    
    double calcularValorTotal() {

        double v = area * valorMetroQuadrado;

        return v;

    }

    double calcularComissao() {

        double c = area * valorMetroQuadrado;

        return c * percentualComissao;
        
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << numeroQuartos << endl
                << "  Banheiros: " << numeroBanheiros << endl
                << "  Vagas: " << numeroVagas << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << calcularComissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda << endl;
    }
};

#endif