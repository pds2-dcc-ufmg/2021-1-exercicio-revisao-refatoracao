#include "Apartamento.hpp"


Apartamento::Apartamento(){
    this->taxa_comissao = 0.04;
}

double Apartamento::valor() {

    double _valor = AREA * VALORm2;
    return _valor;

}

double Apartamento::comissao() {

    double _comissao = AREA * VALORm2;

    return _comissao * taxa_comissao;
    
}

void Apartamento::print() {

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