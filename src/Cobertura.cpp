#include "Cobertura.hpp"

Cobertura::Cobertura() {
    this->taxa_de_comissao = kTaxaComissao;
}

void Cobertura::print() {

    std::cout << "[Cobertura]" << endl;
    Imovel::print();
}
