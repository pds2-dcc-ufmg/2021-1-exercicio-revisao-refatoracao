#include "Imovel.hpp"

using namespace Imoveis;
using namespace cliente;

Imovel::Imovel(){}

ostream& operator << (ostream &out, Imovel imovel) { 
    int porcentagem_comissao = imovel.taxa_comissao * 100;
    out << "[Vendedor]" << endl
        << imovel._vendedor.print() << endl
        << "[Corretor]" << endl
        << "  " + imovel.get_corretor() << endl  
        << imovel.tipo_imovel << endl
        << "area: " << imovel.get_area() << endl
        << "  Quartos: " << imovel.get_Q() << endl
        << "  Banheiros: " << imovel.get_B() << endl
        << "  Vagas: " << imovel.get_V() << endl
        << "Taxa de Comissão: " << porcentagem_comissao << "%" << endl
        << "valor Comissão: R$ " << fixed << setprecision(2) << imovel.get_comissao() << endl
        << "valor de Venda: R$ " << fixed << setprecision(2) << imovel.get_valor() << endl;

    return out;
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