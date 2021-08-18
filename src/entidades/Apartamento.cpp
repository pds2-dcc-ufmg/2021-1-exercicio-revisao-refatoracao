#include <iostream>
#include <string>
#include "Apartamento.hpp"

#define COMISSAO 0.04

double Apartamento::comissao() {
    double c = area * valorM2;
    return c * COMISSAO;
}

double Apartamento::valor() {
    double v = area * valorM2;
    return v;
}

void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
              << "  Quartos: " << quantidadeQuartos << endl
              << "  Banheiros: " << quantidadeBanheiros << endl
              << "  Vagas: " << quantidadeVagas << endl
              << "Taxa de Comissão: " << 4 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda << endl;
}