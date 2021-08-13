#include <iostream>
#include "Casa.hpp"

int Casa::_somaQte = 0;
double Casa::_somaValor = 0;
double Casa::_somaComissao = 0;

void Casa::print () {
    std::cout << "[Casa]" << endl;

    printTituloImovel();
    printImovel();
}

Casa::Casa (ImovelProps props) :
  Imovel(props) {
    _somaQte++;
    _somaValor += getValor();
    _somaComissao += getComissao();
}