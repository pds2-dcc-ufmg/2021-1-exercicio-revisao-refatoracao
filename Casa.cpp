#include "Casa.hpp"

Casa::Casa(
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
    vendedor,
    corretor
){}

double Casa::valor(){
    double valor_casa = area * valor_m2;
    return valor_casa;
}

double Casa::comissao(){
    double comissao_casa = area * valor_m2;
    return comissao_casa * taxa_comissao;
}

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << quartos << endl
            << "  Banheiros: " << banheiros << endl
            << "  Vagas: " << vagas << endl
            << "Taxa de Comissão: " << taxa_comissao*100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao_imovel << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_total << endl;
}