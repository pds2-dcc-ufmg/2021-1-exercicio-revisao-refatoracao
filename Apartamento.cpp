#include <iostream>
#include <string>
#include "Apartamento.hpp"

Apartamento::Apartamento(){
    _taxaComissao = 0.04;
}

void Apartamento::print(){
    std::cout << "[Apartamento]" << endl;
    Imovel::print();
}