#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Cobertura.hpp"

Cobertura::Cobertura(string cor, double a, int q, int b, int vag, double valm2, Cliente ven): Imovel(cor, a, q, b, vag, valm2, ven){
    _porcComissao = 0.1;
    _taxa = 10;
};

void Cobertura::print() {
    std::cout << "[Cobertura]" << endl;
    Imovel::print();
}
