#include "Apartamento.hpp"

Apartamento::Apartamento(
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

double Apartamento::valor(){
    double valorTotal = area * valor_m2;
    return valorTotal;
}

double Apartamento::comissao(){
    double resultado = area * valor_m2;
    return resultado * taxa_comissao;
}

void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << area << endl
            << "  Quartos: " << quartos << endl
            << "  Banheiros: " << banheiros << endl
            << "  Vagas: " << vagas << endl
            << "Taxa de Comissão: " << taxa_comissao*100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao_imovel << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_total << endl;
}