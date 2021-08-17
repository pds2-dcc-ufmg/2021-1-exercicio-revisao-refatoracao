#include <iostream>
#include <string>
#include "Cobertura.hpp"

double Cobertura::comissao() {

    double comissao = area * valor_m2;
    return comissao * 0.10;
}

void Cobertura::print() {

	std::cout << "[Cobertura]" << endl;
	Imovel::print();
	std::cout << "Area: " << area << endl
              << "  Quartos: " << quartos << endl
              << "  Banheiros: " << banheiros << endl
              << "  Vagas: " << vagas << endl
              << "Taxa de Comissão: " << 10 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
    }
