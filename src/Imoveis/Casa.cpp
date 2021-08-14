#include "../include/Imoveis/Casa.hpp"

using namespace Imoveis;

Casa::Casa(){
    this->taxa_comissao = 0.06;
}

void Casa::print() {

    std::cout << "[Casa]" << endl;
    Imovel::print();
    std::cout << "Area: " << _area << endl
            << "  Quartos: " << _Q << endl
            << "  Banheiros: " << _B << endl
            << "  Vagas: " << _V << endl
            << "Taxa de Comissão: " << 6 << "%" << endl
            << "valor Comissão: R$ " << fixed << setprecision(2) << _comissao << endl
            << "valor de Venda: R$ " << fixed << setprecision(2) << _valor << endl;

}