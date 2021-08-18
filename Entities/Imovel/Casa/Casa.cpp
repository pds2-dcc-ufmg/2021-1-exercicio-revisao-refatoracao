#include "Casa.hpp"

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
              << "  Quartos: " << quartos << endl
              << "  Banheiros: " << banheiros << endl
              << "  Vagas: " << vagas << endl
              << "Taxa de Comissão: " << 6 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}

double Casa::getTaxaComissao() {
    return TAXA_COMISSAO;
}
