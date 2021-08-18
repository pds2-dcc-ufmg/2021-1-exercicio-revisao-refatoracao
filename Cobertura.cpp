#include <iostream>
#include "Cobertura.hpp"
#include "ImovelProps.hpp"
#include "Imovel.hpp"

int Cobertura::_somaQte = 0;
double Cobertura::_somaValor = 0;
double Cobertura::_somaComissao = 0;

void Cobertura::print () {
  std::cout << "[Cobertura]" << endl;

  printTituloImovel();
  printImovel();
}

Cobertura::Cobertura (ImovelProps props) :
  Imovel(props) {
    _somaQte++;
    _somaValor += getValor();
    _somaComissao += getComissao();
} 