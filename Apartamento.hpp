#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 

    double comissao_apartamento = 0.04;

    double comissao() override {
        return area * VALORm2 * comissao_apartamento;
    }

    void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl;
        std::cout << "  Quartos: " << quartos << endl;
        std::cout << "  Banheiros: " << banheiros << endl;
        std::cout << "  Vagas: " << vagas << endl;
        std::cout << "Taxa de Comissão: " << 4 << "%" << endl;
        std::cout << "Valor Comissão: R$ " << fixed << setprecision(2) << taxa_comissao << endl;
        std::cout << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif