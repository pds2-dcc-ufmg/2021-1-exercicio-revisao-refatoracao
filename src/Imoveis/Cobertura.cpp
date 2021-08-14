#include "../include/Imoveis/Cobertura.hpp"

using namespace Imoveis;

Cobertura::Cobertura(){
    this->taxa_comissao = 0.10;
}

Cobertura::Cobertura(){}


void Cobertura::print() {

    std::cout << "[Cobertura]" << endl;
    Imovel::print();
    std::cout << "area: " << _area << endl
            << "  Quartos: " << _Q << endl
            << "  Banheiros: " << _B << endl
            << "  Vagas: " << _V << endl
            << "Taxa de Comissão: " << 10 << "%" << endl
            << "valor Comissão: R$ " << fixed << setprecision(2) << _comissao << endl
            << "valor de Venda: R$ " << fixed << setprecision(2) << _valor << endl;
}
