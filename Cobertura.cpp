#include "Cobertura.hpp"

double Cobertura::valor() {

   return AREA * VALORm2;
}

double Cobertura::comissao() {

    return valor() * TAXA_COMISSAO_COB;
}

void Cobertura::print() {

    std::cout << "[Cobertura]" << std::endl;
    Imovel::print();
    std::cout << "Area: " << AREA << std::endl
            << "  Quartos: " << Q << std::endl
            << "  Banheiros: " << B << std::endl
            << "  Vagas: " << V << std::endl
            << "Taxa de Comissão: " << 10 << "%" << std::endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << C << std::endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << std::endl;
}
