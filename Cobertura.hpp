#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

#define COMISSAO_COBERTURA 0.10

using namespace std;

class Cobertura : public Imovel {
    
    public:

    // Método para calcular comissão da cobertura
    double comissao() {

        double c = area * valor_m2;

        return c * COMISSAO_COBERTURA;
        
    }

    // Método que escreve as insformações da cobertura
    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << qt_quartos << endl
                << "  Banheiros: " << qt_banheiros << endl
                << "  Vagas: " << qt_vagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_venda << endl;
    }
};

#endif
