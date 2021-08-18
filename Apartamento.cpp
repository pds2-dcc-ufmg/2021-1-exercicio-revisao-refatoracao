#include "Apartamento.hpp"
#include<iostream>

using namespace std;

Apartamento::double valor() {

        double Valor_Total = AREA * VALORm2;

        return Valor_Total;

    }

Apartamento::double comissao() {

        double comisao = AREA * VALORm2;

        return comisao * Taxa;

    }

Apartamento::void print() {

        std::cout << "[Apartamento]" << endl;
        Imovel::print();
        std::cout << "Area: " << AREA << endl
                << "  Quartos: " << Num_Quartos << endl
                << "  Banheiros: " << Num_Banheiros << endl
                << "  Vagas: " << Num_Vagas << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << Valor_Comissao  << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}
