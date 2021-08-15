#include "Cobertura.hpp"

double Cobertura::calcular_comissao(){
    return calcular_valor() * 0.1;
}

void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print(10);
}