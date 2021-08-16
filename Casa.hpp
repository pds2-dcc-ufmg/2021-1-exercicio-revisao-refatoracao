#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

#define COMISSAO_CASA 0.06

using namespace std;

class Casa : public Imovel {

    public:

    // Método que calcula a comissão da casa
    double comissao() {

        double c = area * valor_m2;

        return c * COMISSAO_CASA;
        
    }

    // Método que escreve as informações da casa
    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << qt_quartos << endl
                << "  Banheiros: " << qt_banheiros << endl
                << "  Vagas: " << qt_vagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_venda << endl;

    }

};

#endif
