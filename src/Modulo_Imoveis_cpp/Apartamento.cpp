#include "Apartamento.hpp"

using namespace Imoveis;

Apartamento::Apartamento(){
    this->taxa_comissao = 0.04;
}

double Apartamento::valor() {

    double _valor = area * valor_m2;
    return _valor;

}

double Apartamento::comissao() {

    double _comissao = area * valor_m2;

    return _comissao * taxa_comissao;
    
}

void Apartamento::print() {

    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "area: " << area << endl
            << "  Quartos: " << Q << endl
            << "  Banheiros: " << B << endl
            << "  Vagas: " << V << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
}