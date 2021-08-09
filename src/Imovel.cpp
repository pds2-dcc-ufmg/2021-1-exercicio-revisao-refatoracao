#include "Imovel.hpp"

void Imovel::print() const {
  cout << "[" << this->tipo << "]" << endl;
  cout << "[Vendedor]" << endl;
  this->vendedor.print();
  cout << "[Corretor]" << endl;
  cout << "  " + this->corretor << endl;
  cout << "Area: " << area << endl
       << "  Quartos: " << numQuartos << endl
       << "  Banheiros: " << numBanheiros << endl
       << "  Vagas: " << vagas << endl
       << "Taxa de Comissão: " << (this->taxaComissao * 100) << "%" << endl
       << "Valor Comissão: R$ " << fixed << setprecision(2) << valorComissao
       << endl
       << "Valor de Venda: R$ " << fixed << setprecision(2) << valorVenda
       << endl
       << endl;
}
