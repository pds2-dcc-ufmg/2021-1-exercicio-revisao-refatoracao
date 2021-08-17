#include <iostream>
#include "Apartamento.hpp"

double Apartamento::getComissaoApartamento() {
    return getComissao();
}

void Apartamento::print(){
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << AREA << endl
            << "  Quartos: " << Q << endl
            << "  Banheiros: " << B << endl
            << "  Vagas: " << V << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}