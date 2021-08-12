#include "Casa.hpp"

Casa::Casa() {
    this->taxa_de_comissao = kTaxaComissao;
}

void Casa::print() {

    std::cout << "[Casa]" << endl;
    Imovel::print();

}