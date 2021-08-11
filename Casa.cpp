#include "Casa.hpp"

double valor() {

    return AREA * VALORm2;
}

double comissao() {

    return valor() * TAXA_COMISSAO;
}

void print() {

    std::cout << "[Casa]" << std:: endl;
    Imovel::print();
    std::cout << "Area: " << AREA << std::endl
            << "  Quartos: " << Q << std::endl
            << "  Banheiros: " << B << std::endl
            << "  Vagas: " << V << std::endl
            << "Taxa de Comissão: " << 6 << "%" << std::endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << C << std::endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << std::endl;
 }
