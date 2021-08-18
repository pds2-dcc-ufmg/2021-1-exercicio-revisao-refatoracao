#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double valor() {
        double v = AREA * VALORm2;
        return v;
    }

    double comissao() {
        double c = AREA * VALORm2;
        c *= 0.10;
        return c;
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Quarto << endl
                << "  Banheiros: " << Banheiro << endl
                << "  Vagas: " << Vaga << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif