#include "Imovel.hpp"

void Imovel::print(){
  cout << "[Vendedor]" << endl;
  vendedor.print();
  cout << "[Corretor]" << endl;
  cout << "  " + corretor << endl;

}

Imovel::Imovel(double area, int quarto, int banheiro, int vagas, double valorm2, double valor, double comissao, Cliente* vendedor, string corretor){
  this->AREA = area;
  this->QUARTOS = quarto;
  this->BANHEIROS = banheiro;
  this->VAGAS = vagas;
  this->VALORm2 = valorm2;
  this->Valor = valor;
  this->COMISSAO = comissao;
  this->vendedor = *vendedor;
  this->corretor = corretor;
}
