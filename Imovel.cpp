#include <iostream>
#include <string>
#include "Imovel.hpp"

void Imovel::printTituloImovel () {
  std::cout << "[Vendedor]" << endl;
  _props.vendedor.print();
  std::cout << "[Corretor]" << endl;
  std::cout << "  " + _props.corretor << endl;
}

void Imovel::printImovel () {
  std::cout 
    << "Area: " << _props.area << endl
    << "  Quartos: " << _props.numQuartos << endl
    << "  Banheiros: " << _props.numBanheiros << endl
    << "  Vagas: " << _props.numVagas << endl
    << "Taxa de Comissão: " << (int)(getTaxaComissao() * 100) << "%" << endl
    << "Valor Comissão: R$ " << fixed << setprecision(2) << getComissao() << endl
    << "Valor de Venda: R$ " << fixed << setprecision(2) << getValorTotal() << endl;
}
