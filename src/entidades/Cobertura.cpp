#include <iostream>
#include <string>
#include "Cobertura.hpp"

#define COMISSAO 0.10

double Cobertura::valor() {
    double v = area * valorM2;
    return v;
}

double Cobertura::comissao() {
    double c = area * valorM2;
    return c * COMISSAO;
}

void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
              << "  Quartos: " << quantidadeQuartos << endl
              << "  Banheiros: " << quantidadeBanheiros << endl
              << "  Vagas: " << quantidadeVagas << endl
              << "Taxa de Comissão: " << 10 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda << endl;
}