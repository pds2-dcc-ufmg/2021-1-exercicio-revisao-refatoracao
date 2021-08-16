#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {

        double valor = AREA * ValorMetro2;

        return valor;

    }

    double porcentagemComissao = 0.06;

    double comissao() {

        double comissao = AREA * ValorMetro2;

        return comissao * porcentagemComissao;
        
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << QUARTOS << endl
                << "  Banheiros: " << BANHEIROS << endl
                << "  Vagas: " << VAGAS << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

    }

};

#endif