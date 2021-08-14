#include "Apartamento.hpp"

using namespace Imoveis;

Apartamento::Apartamento(){
    this->taxa_comissao = 0.04;
}


void Apartamento::print() {

    int porcentagem_comissao = taxa_comissao * 100;
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "area: " << _area << endl
            << "  Quartos: " << _Q << endl
            << "  Banheiros: " << _B << endl
            << "  Vagas: " << _V << endl
            << "Taxa de Comissão: " << porcentagem_comissao << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << _comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor << endl;
}