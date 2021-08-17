#include "Apartamento.hpp"

Apartamento::Apartamento(double area, int quarto, int banheiro, int vagas, double valorm2, double valor, double comissao, Cliente vendedor, string corretor){
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

double Apartamento::valor(){
  return AREA * VALORm2;

}

double Apartamento::comissao(){
  const double percent = 0.04;
  double comission = AREA * VALORm2;
  return comission * percent;

}

void Apartamento::print() {
  std::cout << "[Apartamento]" << endl;
  Imovel::print();
  std::cout << "Area: " << AREA << endl
          << "  Quartos: " << QUARTOS << endl
          << "  Banheiros: " << BANHEIROS << endl
          << "  Vagas: " << VAGAS << endl
          << "Taxa de Comissão: 4%" << endl
          << "Valor Comissão: R$ " << fixed << setprecision(2) << COMISSAO << endl
          << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}
