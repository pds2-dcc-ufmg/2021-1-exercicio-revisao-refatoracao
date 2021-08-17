#include <iostream>
#include <string>
#include "Imovel.hpp"

double Imovel :: get_valor() {
    double valor_total = area * valor_m2;
    return valor_total;
}

double Imovel :: get_comissao() {
    return comissao; 
}

void Imovel :: print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
    std::cout << "Area: " << area << endl
        << "  Quartos: " << quartos << endl
        << "  Banheiros: " << banheiros << endl
        << "  Vagas: " << vagas << endl
        << "Taxa de Comissão: " << taxa_comissao << "%" << endl
        << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
        << "Valor de Venda: R$ " << fixed << setprecision(2) << valor << endl;
    }