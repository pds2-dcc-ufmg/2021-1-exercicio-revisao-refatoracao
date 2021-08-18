#include <iostream>
#include <string>
#include "Cobertura.hpp"

Cobertura::Cobertura(){
    _taxaComissao = 0.1;
}

void Cobertura::print(){
    std::cout << "[Cobertura]" << std::endl;
    Imovel::print();
}