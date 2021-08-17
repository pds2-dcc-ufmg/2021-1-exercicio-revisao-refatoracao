#include <iostream>
#include <string>
#include "Casa.hpp"

double Casa::comissao() {
        
double comissao = area * valor_m2;
	return comissao * 0.06;  
}

void Casa::print() {

	std::cout << "[Casa]" << endl;
	Imovel::print();
	std::cout << "Area: " << area << endl
              << "  Quartos: " << quartos << endl
              << "  Banheiros: " << banheiros << endl
              << "  Vagas: " << vagas << endl
              << "Taxa de Comissão: " << 6 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
}
