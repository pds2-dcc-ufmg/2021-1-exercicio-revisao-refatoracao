#include <iostream>
#include <string>
#include "Apartamento.hpp"


using namespace std;

double Apartamento::valor() {

        double valorfinal = AREA * VALORm2;

        return valorfinal;

    }

double Apartamento::comissao() {

        double c = AREA * VALORm2;

        return c * TX_APTO;
        
    }

void Apartamento::print() {

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
