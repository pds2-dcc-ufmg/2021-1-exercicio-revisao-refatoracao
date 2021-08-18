
#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Apartamento.hpp"

#define TAXA 0.04

double Apartamento::valor(){
        double v = AREA * VALORm2;
        return v;
}

double Apartamento::comissao(){
        double c = AREA * VALORm2;
        return c * TAXA;
}

void Apartamento::print(){
    std::cout << "[Apartamento]" << std::endl;
    Imovel::print();
    std::cout << "Area: " << AREA << std::endl
            << "  Quartos: " << Q << std::endl
            << "  Banheiros: " << B << std::endl
            << "  Vagas: " << V << std::endl
            << "Taxa de Comissão: " << 4 << "%" << std::endl
            << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << C << std::endl
            << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << Valor << std::endl;
}
