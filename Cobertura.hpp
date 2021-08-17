#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;
#define TAXA_C_COBERTURA  10

class Cobertura : public Imovel {
    
    public:
    Cobertura()
    {
        taxaComissao = TAXA_C_COBERTURA;
    }
    double valor() {

        double v = AREA * valorMetro2;

        return v;

    }

    double comissao() {

        double c = AREA * valorMetro2;

        return ((c * TAXA_C_COBERTURA)/100);
        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << taxaComissao << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif