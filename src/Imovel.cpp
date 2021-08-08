#include "Imovel.hpp"

void Imovel::print() const {
  cout << "[Vendedor]" << endl;
  this->vendedor.print();
  cout << "[Corretor]" << endl;
  cout << "  " + this->corretor << endl;
}
