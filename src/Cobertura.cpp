#include "Cobertura.hpp"

double Cobertura::valor() {

    double valor_da_cobertura = area * valor_por_metro_quadrado;

    return valor_da_cobertura;

}

double Cobertura::comissao() {

    double comissao = kTaxaComissao * valor();

    return comissao;
    
}

void Cobertura::print() {

    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << quartos << endl
            << "  Banheiros: " << banheiros << endl
            << "  Vagas: " << vagas << endl
            << "Taxa de Comissão: " << int(kTaxaComissao*100) << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_da_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor_de_venda << endl;
}
