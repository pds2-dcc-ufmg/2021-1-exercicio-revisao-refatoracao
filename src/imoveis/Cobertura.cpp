#include <iostream>
#include <string>

#include "Cobertura.hpp"

using namespace std;


double Cobertura::valor() {
    double v = AREA * VALORm2;
    return v;
}

double Cobertura::comissao()  {
    double c = AREA * VALORm2;
    return c * 0.10;
}

void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << AREA << endl
            << "  Quartos: " << Qtd_quartos << endl
            << "  Banheiros: " << Qtd_banheiros << endl
            << "  Vagas: " << Qtd_vagas << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao_valor << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}
