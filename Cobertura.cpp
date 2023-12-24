#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Cobertura.hpp"

#define TAXA 0.10

double Cobertura::valor(){
    double v = AREA * VALORm2;
    return v;
}

double Cobertura::comissao(){
    double c = AREA * VALORm2;
    return c * TAXA;    
}

void Cobertura::print(){

    std::cout << "[Cobertura]" << std::endl;
    Imovel::print();
    std::cout << "Area: " << AREA << std::endl
            << "  Quartos: " << Q << std::endl
            << "  Banheiros: " << B << std::endl
            << "  Vagas: " << V << std::endl
            << "Taxa de Comissão: " << 10 << "%" << std::endl
            << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << C << std::endl
            << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << Valor << std::endl;
}
