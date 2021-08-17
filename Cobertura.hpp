#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#define COMISSAOPERCENT 10

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double getValor() {
        double valor = area * valor_m2;
        return valor;
    }

    double comissao() {
        return this->getValor() * 0.10;
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << n_quartos << endl
                << "  Banheiros: " << n_banheiros << endl
                << "  Vagas: " << n_vagas << endl
                << "Taxa de Comissão: " << COMISSAOPERCENT << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_total << endl;
    }
};

#endif
