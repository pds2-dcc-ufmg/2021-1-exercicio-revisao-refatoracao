#include "../include/Imoveis/Imovel.hpp"

using namespace Imoveis;

Imovel::Imovel(double area, double valor_m2, int q, int b, int v, string corretor, cliente::Cliente vendedor, double comissao) {
    this->_area = area;
    this->_valor_m2 = valor_m2;
    this->_comissao = comissao;
    this->_valor = calcula_valor();
    this->_Q = q;
    this->_B = b;
    this->_V = v;
    this->_corretor = corretor;
    this->_vendedor = vendedor;
}

void Imovel::print() {
    cout << "[Vendedor]" << endl;
    _vendedor.print();
    cout << "[Corretor]" << endl;
    cout << "  " + _corretor << endl;
}

double Imovel::calcula_valor() {
    double v = _area * _valor_m2;
    return v;
}

double Imovel::calcula_comissao() {
    double c = _area * _valor_m2;
    return c * taxa_comissao; 
}

void Imovel::set_area(double area){
    this->_area = area;
}
void Imovel::set_Q(int Q){
    this->_Q = Q;
}
void Imovel::set_B(int B){
    this->_B = B;
}
void Imovel::set_V(int V){
    this->_V = V;
}
void Imovel::set_valor_m2(double valor_m2){
    this->_valor_m2 = valor_m2;
}
void Imovel::set_valor(double valor){
    this->_valor = valor;
}
void Imovel::set_comissao(double comissao){
    this->_comissao = comissao;
}
void Imovel::set_corretor(string corretor){
    this->_corretor = corretor;
}
void Imovel::set_vendedor(cliente::Cliente vendedor){
    this->_vendedor = vendedor;
}


double Imovel::get_area(){
    return this-> _area;
}
int Imovel::get_Q(){
    return this-> _Q;
}
int Imovel::get_B(){
    return this-> _B;
}
int Imovel::get_V(){
    return this-> _V;
}
double Imovel::get_valor_m2(){
    return this-> _valor_m2;
}
double Imovel::get_valor(){
    return this-> _valor;
}
double Imovel::get_comissao(){
    return this-> _comissao;
}
string Imovel::get_corretor(){
    return this-> _corretor;
}
cliente::Cliente Imovel::get_vendedor(){
    return this-> _vendedor;
}