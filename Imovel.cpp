#include <iostream>
#include <string>
#include "Imovel.hpp"

using namespace std;

void Imovel::print(){

  cout << "[Vendedor]" << endl;
  vendedor.print();
  cout << "[Corretor]" << endl;
  cout << "  " + corretor << endl;

}

void Imovel::printImov(){

  cout << "Area: " << AREA << endl;
  cout << "  Quartos: " << Q << endl;
  cout << "  Banheiros: " << B << endl;
  cout << "  Vagas: " << V << endl;
  cout << "Taxa de Comissão: " << taxa << "%" << endl;
  cout << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl;
  cout << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

}
