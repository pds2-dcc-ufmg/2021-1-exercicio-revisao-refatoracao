#include <iostream>
#include <string>
#include "Casa.hpp"

Casa::Casa(){
    _taxaComissao = 0.06;
}

void Casa::print(){
    std::cout << "[Casa]" << std::endl;
    Imovel::print();
}