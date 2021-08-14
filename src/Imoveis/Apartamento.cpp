#include "../include/Imoveis/Apartamento.hpp"

using namespace Imoveis;

Apartamento::Apartamento(){
    this->taxa_comissao = 0.04;
}


void Apartamento::print() {

    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    std::cout << "area: " << _area << endl
            << "  Quartos: " << _Q << endl
            << "  Banheiros: " << _B << endl
            << "  Vagas: " << _V << endl
            << "Taxa de Comissão: " << 4 << "%" << endl
            << "Valor Comissão: R$ " << fixed << setprecision(2) << _comissao << endl
            << "Valor de Venda: R$ " << fixed << setprecision(2) << _valor << endl;
}