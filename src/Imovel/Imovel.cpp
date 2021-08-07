#include "Imovel.hpp"

double Imovel::getArea() { return area; }
double Imovel::getValorM2() { return valorM2; }
double Imovel::getValor() { return valor; }
double Imovel::getComissao() { return comissao; }

void Imovel::setArea(double area) { this->area = area; }
void Imovel::setValorM2(double valorM2) { this->valorM2 = valorM2; }
void Imovel::setValor(double valor) { this->valor = valor; }
void Imovel::setComissao(double comissao) { this->comissao = comissao; }

double Imovel::calcValor() { return area * valorM2; }
double Imovel::calcComissao(double pct) { return calcValor() * pct; }
