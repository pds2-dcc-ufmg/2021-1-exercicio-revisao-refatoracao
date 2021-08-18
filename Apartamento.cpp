#include <iostream>
#include <string>
#include "Apartamento.hpp"
#include "ImovelProps.hpp"

int Apartamento::_somaQte = 0;
double Apartamento::_somaValor = 0;
double Apartamento::_somaComissao = 0;

Apartamento::Apartamento (ImovelProps props) :
  Imovel(props) {
    _somaQte++;
    _somaValor += getValor();
    _somaComissao += getComissao();
}

void Apartamento::print () {
    std::cout << "[Apartamento]" << endl;

    printTituloImovel();
    printImovel();
}
