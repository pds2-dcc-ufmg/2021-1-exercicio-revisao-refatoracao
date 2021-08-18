#include "Cobertura.hpp"


void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
              << "  Quartos: " << quartos << endl
              << "  Banheiros: " << banheiros << endl
              << "  Vagas: " << vagas << endl
              << "Taxa de Comissão: " << 10 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}

double Cobertura::getTaxaComissao() {
    return TAXA_COMISSAO;
}
