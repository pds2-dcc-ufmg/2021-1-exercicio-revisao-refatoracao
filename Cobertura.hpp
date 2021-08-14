#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double valor() {

        double val_total = area * valor_m2;

        return val_total;

    }

    double comissao() {

        double comissao_cobertura = area * valor_m2;

        return comissao_cobertura * 0.10;
        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao_imovel << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_total << endl;
    }
};

#endif