#include <iostream>
#include <string>

#include "Apartamento.hpp"

using namespace std;

double Apartamento::valor() {
    double v = AREA * VALORm2;
    return v;
}

double Apartamento::comissao()  {
    double c = AREA * VALORm2;
    return c * Taxa_Comissao_Apartamento;
}

void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << AREA << endl
            << "  Quartos: " << Qtd_quartos << endl
            << "  Banheiros: " << Qtd_banheiros << endl
            << "  Vagas: " << Qtd_vagas << endl
            << "Taxa de Comissão: " << fixed << setprecision(0) << (Taxa_Comissao_Apartamento*100) << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao_valor << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}
