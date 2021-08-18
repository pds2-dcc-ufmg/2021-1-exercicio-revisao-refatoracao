#include <iostream>
#include <string>
#include "Casa.hpp"

#define COMISSAO 0.06

double Casa::valor() {
    double v = area * valorM2;
    return v;
}

double Casa::comissao() {
    double c = area * valorM2;
    return c * COMISSAO;
}

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
              << "  Quartos: " << quantidadeQuartos << endl
              << "  Banheiros: " << quantidadeBanheiros << endl
              << "  Vagas: " << quantidadeVagas << endl
              << "Taxa de Comissão: " << 6 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda << endl;
}