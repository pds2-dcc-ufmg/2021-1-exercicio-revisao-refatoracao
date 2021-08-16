#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double valor() {

        double v = AREA * ValorMetro2;

        return v;

    }

    double porcentagemComissao = 0.10;

    double comissao() {

        double c = AREA * ValorMetro2;

        return c * porcentagemComissao;
        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << QUARTOS << endl
                << "  Banheiros: " << BANHEIROS << endl
                << "  Vagas: " << VAGAS << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif