#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Casa.hpp"

#define TAXA 0.06

double Casa::valor(){
    double v = AREA * VALORm2;
    return v;
}

double Casa::comissao(){
    double c = AREA * VALORm2;
    return c * TAXA;
}

void Casa::print(){
    std::cout << "[Casa]" << std::endl;
    Imovel::print();
    std::cout << "Area: " << AREA << std::endl
            << "  Quartos: " << Q << std::endl
            << "  Banheiros: " << B << std::endl
            << "  Vagas: " << V << std::endl
            << "Taxa de Comissão: " << 6 << "%" << std::endl
            << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << C << std::endl
            << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << Valor << std::endl;
}