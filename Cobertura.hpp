#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    Cobertura() {
        this->taxa_comissao = 0.10;
    }

    double valor() {

        double v = area * valor_m2;

        return v;

    }

    double comissao() {

        double c = area * valor_m2;

        return c * taxa_comissao;
        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << qtd_quartos << endl
                << "  Banheiros: " << qtd_banheiros << endl
                << "  Vagas: " << qtd_vagas << endl
                << "Taxa de Comissão: " << taxa_comissao*100 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_venda << endl;
    }
};

#endif