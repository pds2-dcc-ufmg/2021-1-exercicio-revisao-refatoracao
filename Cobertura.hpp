#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double comissao_cobertura = 0.1;

     double comissao() override {
        return area * VALORm2 * comissao_cobertura;
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl;
        std::cout << "  Quartos: " << quartos << endl;
        std::cout << "  Banheiros: " << banheiros << endl;
        std::cout << "  Vagas: " << vagas << endl;
        std::cout << "Taxa de Comissão: " << 10 << "%" << endl;
        std::cout << "Valor Comissão: R$ " << fixed << setprecision(2) << taxa_comissao << endl;
        std::cout << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
};

#endif