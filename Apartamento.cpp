#include <iostream>
#include <string>
#include "Apartamento.hpp"  

double Apartamento::comissao(){

    double comissao = area * valor_m2;
        return comissao * 0.04;
    }

void Apartamento::print(){

    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
              << "  Quartos: " << quartos << endl
              << "  Banheiros: " << banheiros << endl
              << "  Vagas: " << vagas << endl
              << "Taxa de Comissão: " << 4 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
    }
};
