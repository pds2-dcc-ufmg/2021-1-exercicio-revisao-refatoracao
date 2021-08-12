#include "Apartamento.hpp"

Apartamento::Apartamento() {
    this->taxa_de_comissao = kTaxaComissao;
}

void Apartamento::print() {

    std::cout << "[Apartamento]" << endl;
    Imovel::print();
    
}