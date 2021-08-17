#include <iostream>
#include <string>
#include "Imovel.hpp"

using namespace std;

Imovel::Imovel(string _corretor, double _AREA, int _Q, int _B, int _V, double _VALORm2, Cliente _vendedor){
  corretor = _corretor, 
  AREA = _AREA, 
  Q = _Q, 
  B = _B, 
  V = _V, 
  VALORm2 = _VALORm2, 
  vendedor = _vendedor
}

void Imovel::print(){

  cout << "[Vendedor]" << endl;
  vendedor.print();
  cout << "[Corretor]" << endl;
  cout << "  " + corretor << endl;

}

void Imovel::printImov(double t){

  cout << "Area: " << AREA << endl;
  cout << "  Quartos: " << Q << endl;
  cout << "  Banheiros: " << B << endl;
  cout << "  Vagas: " << V << endl;
  cout << "Taxa de Comissão: " << t << "%" << endl;
  cout << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl;
  cout << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;

}
