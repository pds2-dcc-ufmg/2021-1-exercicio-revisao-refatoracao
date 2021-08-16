#include <string>
#include "Imovel.hpp"

using namespace std;

void Imovel::setArea(double _area){
       area = _area;
}

double Imovel::getArea(){
       return area;
}

void Imovel::setQt_quartos(int _qt_quartos){
       qt_quartos = _qt_quartos;
}

int Imovel::getQt_quartos(){
       return qt_quartos;
}

void Imovel::setQt_banheiros(int _qt_banheiros){
      qt_banheiros = _qt_banheiros;
}

int Imovel::getQt_banheiros(){
       return qt_banheiros;
}

void Imovel::setQt_vagas(int _qt_vagas){
       qt_vagas = _qt_vagas;
}

int Imovel::getQt_vagas(){
       return qt_vagas;
}

void Imovel::setValor_m2(double _valor_m2){
       valor_m2 = _valor_m2;
}

double Imovel::getValor_m2(){
       return valor_m2;
}

void Imovel::setValor_venda(double _valor_venda){
       valor_venda = _valor_venda;
}

double Imovel::getValor_venda(){
       return valor_venda;
}

void Imovel::setValor_comissao(double _valor_comissao){
       valor_comissao = _valor_comissao;
}

double Imovel::getValor_comissao(){
       return valor_comissao;
}

void Imovel::setVendedor(Cliente _vendedor){
       vendedor = _vendedor;
}

Cliente Imovel::getVendedor(){
       return vendedor;
}

void Imovel::setCorretor(string _corretor){
       corretor = _corretor;
}

string Imovel::getCorretor(){
       return corretor;
}

// Valor a retornar se o imóvel não for especificado
double Imovel::valor(){
       return -1.0;
}

double Imovel::comissao(){
       return -1.0;
}
  


