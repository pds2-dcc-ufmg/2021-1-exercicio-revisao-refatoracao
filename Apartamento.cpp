#include <iostream>
#include <string>
#include "Apartamento.hpp"

double Apartamento::valor(){

    double Valor_imovel = AREA * VALORm2;

    return Valor_imovel;

}

double Apartamento::comissao(){

    double Valor_comissao = AREA * VALORm2;

    Valor_comissao = Valor_comissao * Taxa_comissao;

	return Taxa_comissao;

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