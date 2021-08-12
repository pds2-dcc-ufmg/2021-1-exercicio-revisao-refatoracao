#include <iostream>
#include <string>

#include "Imovel.hpp"

using namespace std;


void Imovel::setArea(double Area) {
    AREA = Area;
}
double Imovel::getArea() {
   return AREA;
}
void Imovel::setQtd_quartos(int _Qtd_quartos) {
    Qtd_quartos = _Qtd_quartos;
}
int Imovel::getQtd_quartos() {
    return Qtd_quartos;
}
void Imovel::setQtd_banheiros(int _Qtd_banheiros) {
    Qtd_banheiros = _Qtd_banheiros;
}
int Imovel::getQtd_banheiros() {
    return Qtd_banheiros;
}
void Imovel::setQtd_vagas(int _Qtd_vagas) {
    Qtd_vagas = _Qtd_vagas;
}
int Imovel::getQtd_vagas() {
    return Qtd_vagas;
}
void Imovel::setValorM2(double _ValorM2) {
    VALORm2 = _ValorM2;
}
double Imovel::getValorM2() {
    return VALORm2;
}
void Imovel::setValor(double _Valor) {
    Valor = _Valor;
}
double Imovel::getValor() {
    return Valor;
}
void Imovel::setComissao_valor(double _Comissao_valor) {
    Comissao_valor = _Comissao_valor;
}
double Imovel::getComissao_valor() {
    return Comissao_valor;
}
void Imovel::setVendedor(Cliente _vendedor) {
    vendedor = _vendedor;
}
Cliente Imovel::getVendedor() {
    return vendedor;
}
void Imovel::setCorretor(string _corretor) {
    corretor = _corretor;
}
string Imovel::getCorretor() {
    return corretor;
}

double Imovel::valor() {
    //Valor padrão a ser retornado caso o imovel não seja específicado
    return -1.0;
}

double Imovel::comissao()  {
    //Valor padrão a ser retornado caso o imovel não seja específicado
    return -1.0;
}

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + corretor << endl;
}
