#include "Casa.hpp"

double Casa::valor() {

    double valor_da_casa = area * valor_por_metro_quadrado;

    return valor_da_casa;

}

double Casa::comissao() {

    double comissao = area * valor_por_metro_quadrado;

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
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_da_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_de_venda << endl;

}