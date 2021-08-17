#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {

        double valor = area * valor_m2;

        return valor;

    }

    double comissao() {

        double comissao = area * valor_m2;

        return comissao * 0.06;
        
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << numQuartos << endl
                << "  Banheiros: " << numBanheiros << endl
                << "  Vagas: " << numVagas << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;

    }

};

#endif
