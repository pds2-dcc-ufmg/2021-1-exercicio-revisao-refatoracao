#include "Imovel.hpp"

using namespace Imoveis;

// Construtor

Imovel::Imovel(
    std::string corretor, 
    double area, 
    int quartos, 
    int banheiros, 
    int vagas, 
    double valor_m2, 
    cliente::Cliente vendedor) {

    this->_area = area;
    this->_quartos = quartos;
    this->_banheiros = banheiros;
    this->_vagas = vagas;
    this->_valor_m2 = valor_m2;
    this->_corretor = corretor;
    this->_vendedor = vendedor;
    this->_comissao = calcula_comissao();
    this->_valor = calcula_valor() + _comissao;
}

// Método que calcula o valor do imovel

double Imovel::calcula_valor() {
    double v = _area * _valor_m2;
    return v;
}

// Método que calcula a comissao do imovel

double Imovel::calcula_comissao() {
    double c = _area * _valor_m2;
    return c * taxa_comissao; 
}

// Getters

double Imovel::get_area(){
    return this->_area;
}
int Imovel::get_quartos(){
    return this->_quartos;
}
int Imovel::get_banheiros(){
    return this->_banheiros;
}
int Imovel::get_vagas(){
    return this->_vagas;
}
double Imovel::get_valor_m2(){
    return this->_valor_m2;
}
double Imovel::get_valor(){
    return this->_valor;
}
double Imovel::get_comissao(){
    return this->_comissao;
}
std::string Imovel::get_corretor(){
    return this->_corretor;
}