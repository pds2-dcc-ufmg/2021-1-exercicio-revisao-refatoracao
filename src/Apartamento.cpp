#include "Apartamento.hpp"

double Apartamento::valor() {

    double valor_do_apartamento = area * valor_por_metro_quadrado;

    return valor_do_apartamento;

}

double Apartamento::comissao() {

    double comissao = area * valor_por_metro_quadrado;

    return comissao * 0.04;
    
}

void Apartamento::print() {

    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << quartos << endl
            << "  Banheiros: " << banheiros << endl
            << "  Vagas: " << vagas << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_da_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_de_venda << endl;
}