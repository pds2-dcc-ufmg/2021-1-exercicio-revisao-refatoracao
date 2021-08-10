#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    double taxaComissao = 0.04;
    
    double calculaValorApartamento() {

        double valorApartamento = area * valorMetroQuadrado;

        return valorApartamento;

    }

    double calculaComissao() {

        double comissao = area * valorMetroQuadrado;

        return comissao * taxaComissao;
        
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
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