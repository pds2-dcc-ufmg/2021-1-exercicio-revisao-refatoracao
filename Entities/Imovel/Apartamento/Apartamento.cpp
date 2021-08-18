#include "Apartamento.hpp"

void Apartamento::print() {

    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
              << "  Quartos: " << quartos << endl
              << "  Banheiros: " << banheiros << endl
              << "  Vagas: " << vagas << endl
              << "Taxa de Comissão: " << 4 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}

double Apartamento::getTaxaComissao() {
    return TAXA_COMISSAO;
}
