#include <iostream>
#include <vector>
#include "Imovel.hpp"
#include "Imoveis.hpp"

#include "Apartamento.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"

void Imoveis::add (Imovel* imovel) {
  list.push_back(imovel);
}

void Imoveis::printRelatorio () const {
  cout << "\n>> Relatório de Imóveis <<" << endl;
  for(Imovel* imovel : list) {
    imovel->print();
    std::cout << endl;
  }

  printResumoGeral();
}

template <class T>
void Imoveis::printSomas (string titulo) {
  std::cout
  << "\n>>" << titulo << "<<\n"
  << "\n Quantidade: " << T::getSomaQte()
  << "\n Valor Total: R$ " << fixed << setprecision(2) << T::getSomaValor()
  << "\n Comissão Total: R$" << T::getSomaComissao()
  << endl;
}

void Imoveis::printResumoGeral () const {
  cout << "\n>> Resumo Geral <<" << endl;
  Imoveis::printSomas<Apartamento>("Apartamentos");
  Imoveis::printSomas<Cobertura>("Coberturas");
  Imoveis::printSomas<Casa>("Casas");
}