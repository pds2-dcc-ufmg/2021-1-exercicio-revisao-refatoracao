#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

#define COMISSAO_APARTAMENTO 0.04

using namespace std;

class Apartamento : public Imovel {

    public: 

    // Método que calcula a comissão do apartamento 
    double comissao() {

        double c = area * valor_m2;

        return c * COMISSAO_APARTAMENTO;
        
    }

    // Método que escreve as insformações do apartamento
    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << qt_quartos << endl
                << "  Banheiros: " << qt_banheiros << endl
                << "  Vagas: " << qt_vagas << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_venda << endl;
    }
};

#endif
