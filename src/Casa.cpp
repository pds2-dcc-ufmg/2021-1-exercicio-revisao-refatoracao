#include "Casa.hpp"

double Casa::calcular_comissao(){
    return calcular_valor() * 0.06;
}

void Casa::print() {
    std::cout << "[Casa]" << endl;
    Imovel::print();
}