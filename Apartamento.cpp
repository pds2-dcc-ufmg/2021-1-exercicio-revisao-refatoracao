#include "Apartamento.hpp"

Apartamento::Apartamento(double area, int quartos, int banheiros, int vagas, double valor_m2, double valor_venda, double valor_comissao, Cliente vendedor, string corretor)
    :Imovel(area, quartos, banheiros, vagas, valor_m2, area * valor_m2*comissao_taxa, area*valor_m2*comissao_taxa+area * valor_m2, vendedor, corretor){}

double Apartamento::comissao(){
    double valor_total = this->valor();

    return valor_total * comissao_taxa;
}

void Apartamento::print(){
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "Area: " << _area << endl
            << "  Quartos: " << _quartos << endl
            << "  Banheiros: " << _banheiros << endl
            << "  Vagas: " << _vagas << endl
            << "Taxa de Comissão: " << comissao_taxa * 100 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << _valor_comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor_venda << endl;
}
