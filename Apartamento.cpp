#include "Apartamento.hpp"
#include<iostream>

using namespace std;

Apartamento::double valor() {

        double valorfinal = AREA * VALORm2;

        return valorfinal;

    }

Apartamento::double comissao() {

        double comisao = AREA * VALORm2;

        return comisao * 0.04;
        
    }

Apartamento::void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Qtos << endl
                << "  Banheiros: " << Banhos << endl
                << "  Vagas: " << Vgs << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Comiss << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}
