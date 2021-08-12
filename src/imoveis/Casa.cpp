#include <iostream>
#include <string>

#include "Casa.hpp"

using namespace std;


double Casa::valor() {
    double v = AREA * VALORm2;
    return v;
}

double Casa::comissao()  {
    double c = AREA * VALORm2;
    return c * 0.06;
}

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << AREA << endl
            << "  Quartos: " << Qtd_quartos << endl
            << "  Banheiros: " << Qtd_banheiros << endl
            << "  Vagas: " << Qtd_vagas << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << Comissao_valor << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}
