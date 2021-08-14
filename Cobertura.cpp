#include "Cobertura.hpp"

Cobertura::Cobertura(
    double area,
    int quartos,
    int banheiros,
    int vagas,
    double valor_m2,
    Cliente vendedor,
    string corretor
):Imovel(
    area,
    quartos,
    banheiros,
    vagas,
    valor_m2,
    area * valor_m2*taxa_comissao,
    area*valor_m2*(taxa_comissao+1),
    vendedor,
    corretor
){}

double Cobertura::valor(){
    double val_total = area * valor_m2;
    return val_total;
}

double Cobertura::comissao(){
    double comissao_cobertura = area * valor_m2;
    return comissao_cobertura * taxa_comissao;
}

void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
        << "  Quartos: " << quartos << endl
        << "  Banheiros: " << banheiros << endl
        << "  Vagas: " << vagas << endl
        << "Taxa de Comissão: " << taxa_comissao*int(100) << "%" << endl
        << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao_imovel << endl
        << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_total << endl;
}