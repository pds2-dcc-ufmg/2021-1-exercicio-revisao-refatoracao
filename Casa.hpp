#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double comissao_casa = 0.06;

     double comissao() override {
        return area * VALORm2 * comissao_casa;
    }

    void print() {

        std::cout << "[Casa]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl;
        std::cout << "  Quartos: " << quartos << endl;
        std::cout << "  Banheiros: " << banheiros << endl;
        std::cout << "  Vagas: " << vagas << endl;
        std::cout << "Taxa de Comissão: " << 6 << "%" << endl;
        std::cout << "Valor Comissão: R$ " << fixed << setprecision(2) << taxa_comissao << endl;
        std::cout << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

    }

};

#endif