#include "Cobertura.hpp"

using namespace Imoveis;

Cobertura::Cobertura(){
    this->taxa_comissao = 0.10;
}

double Cobertura::valor() {
        double v = area * valor_m2;
        return v;
    }

double Cobertura::comissao() {
    double c = area * valor_m2;
    return c * taxa_comissao; 
}

void Cobertura::print() {

    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "area: " << area << endl
            << "  Quartos: " << Q << endl
            << "  Banheiros: " << B << endl
            << "  Vagas: " << V << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "valor Comissão: R$ " << fixed << setprecision(2) << C << endl
            << "valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
}
