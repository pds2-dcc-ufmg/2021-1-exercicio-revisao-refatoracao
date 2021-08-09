#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:
    Cobertura(){
        this->percentualComissao = 0.10;
    }

    double valor() {

        double v = area * valorMetroQuadrado;

        return v;

    }

    double calcularComissao() {

        double c = area * valorMetroQuadrado;

        return c * percentualComissao;
        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << numeroQuartos << endl
                << "  Banheiros: " << numeroBanheiros << endl
                << "  Vagas: " << numeroVagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << calcularComissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda << endl;
    }
};

#endif