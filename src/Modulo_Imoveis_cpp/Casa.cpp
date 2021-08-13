#include "Casa.hpp"

using namespace Imoveis;

Casa::Casa(){
    this->taxa_comissao = 0.06;
}

double Casa::valor() {

    double _valor = area * valor_m2;
    return _valor;

}

double Casa::comissao() {

    double c = area * valor_m2;
    return c * taxa_comissao;
    
}

void Casa::print() {

    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << Q << endl
            << "  Banheiros: " << B << endl
            << "  Vagas: " << V << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "valor Comissão: R$ " << fixed << setprecision(2) << C << endl
            << "valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;

}