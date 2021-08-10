#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {

    public:
    double taxaComissao = 0.10;
    double calculaValorCobertura() {

        double valorCobertura = area * valorMetroQuadrado;

        return valorCobertura;

    }

    double calculaComissao() {

        double comissao = area * valorMetroQuadrado;

        return comissao * taxaComissao;
        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << taxaComissao*100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valorMetroQuadrado << endl;
    }
};

#endif