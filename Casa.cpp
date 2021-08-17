#include "Casa.hpp"

Casa::Casa(double area, int quarto, int banheiro, int vagas, double valorm2, double valor, double comissao, Cliente vendedor, string corretor){
  this->AREA = area;
  this->QUARTOS = quarto;
  this->BANHEIROS = banheiro;
  this->VAGAS = vagas;
  this->VALORm2 = valorm2;
  this->Valor = valor;
  this->COMISSAO = comissao;
  this->vendedor = vendedor;
  this->corretor = corretor;
}

double Casa::valor() {
  return AREA * VALORm2;
}

double Casa::comissao(){
  const double percent = 0.06;
  double comission = AREA * VALORm2;
  return comission * percent;
}

void Casa::print(){
  std::cout << "[Casa]" << endl;
  Imovel::print();
  std::cout << "Area: " << AREA << endl
          << "  Quartos: " << QUARTOS << endl
          << "  Banheiros: " << BANHEIROS << endl
          << "  Vagas: " << VAGAS << endl
          << "Taxa de Comissão: 6%" << endl
          << "Valor Comissão: R$ " << fixed << setprecision(2) << COMISSAO << endl
          << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}