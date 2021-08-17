#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    double taxaComissao = 0.06;
    double AreaVezesValorM2 = AREA * VALORm2;
    
    public:

    double valor() {
        return AreaVezesValorM2;
    }

    double comissao() {
        return AreaVezesValorM2 * taxaComissao;
    }

    void print() {
        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << NUM_QUARTOS << endl
                << "  Banheiros: " << NUM_BANHEIROS << endl
                << "  Vagas: " << NUM_VAGAS << endl
                << "Taxa de Comissão: " << 6 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif
