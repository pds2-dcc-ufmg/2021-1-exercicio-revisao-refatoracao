#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    
    double taxaComissao = 0.04;
    double AreaVezesValorM2 = AREA * VALORm2;

    public: 
    
    double valor() {
        return AreaVezesValorM2;
    }

    double comissao() {
        return AreaVezesValorM2 * taxaComissao;
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << NUM_QUARTOS << endl
                << "  Banheiros: " << NUM_BANHEIROS << endl
                << "  Vagas: " << NUM_VAGAS << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif
