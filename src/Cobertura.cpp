#include "Cobertura.hpp"

double Cobertura::calcular_comissao() /*override*/{
    return calcular_valor() * 0.10; 
}

void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
}