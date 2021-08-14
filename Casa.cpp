#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Casa.hpp"

Casa::Casa(string cor, double a, int q, int b, int vag, double valm2,  Cliente ven): Imovel(cor, a, q, b, vag, valm2, ven){
    _porcComissao = 0.06;
    _taxa = 6;
};
