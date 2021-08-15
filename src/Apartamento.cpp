#include "Apartamento.hpp"

double Apartamento::calcular_comissao(){
    return calcular_valor() * 0.04;
}

void Apartamento::print() {
    std::cout << "[Apartamento]" << endl;
    Imovel::print(4);
}