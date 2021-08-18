#include <iostream>
#include <iomanip>
#include "Imovel.hpp"

double Imovel::valor(){
    double v = _area * _valorM2;
    return v;
}

double Imovel::comissao(){
    double c = _area * _valorM2;
    return c * _taxaComissao;
}

void Imovel::setArea(double area){
    this->_area = area;
}

double Imovel::getArea(){
    return this->_area;
}

void Imovel::setQuartos(int quartos){
    this->_quartos = quartos;
}

int Imovel::getQuartos(){
    return this->_quartos;
}

void Imovel::setBanheiros(int banheiros){
    this->_banheiros = banheiros;
}

int Imovel::getBanheiros(){
    return this->_banheiros;
}

void Imovel::setVagas(int vagas){
    this->_vagas = vagas;
}

int Imovel::getVagas(){
    return this->_vagas;
}

void Imovel::setValorM2(double valorM2){
    this->_valorM2 = valorM2;
}

double Imovel::getValorM2(){
    return this->_valorM2;
}

void Imovel::setValorVenda(double valorVenda){
    this->_valorVenda = valorVenda;
}

double Imovel::getValorVenda(){
    return this->_valorVenda;
}

void Imovel::setValorComissao(double valorComissao){
    this->_valorComissao = valorComissao;
}

double Imovel::getValorComissao(){
    return this->_valorComissao;
}

void Imovel::setVendedor(Cliente vendedor){
    this->_vendedor = vendedor;
}

Cliente Imovel::getVendedor(){
    return this->_vendedor;
}

void Imovel::setCorretor(std::string corretor){
    this->_corretor = corretor;
}

std::string Imovel::getCorretor(){
    return this->_corretor;
}

void Imovel::setTaxaComissao(double taxaComissao){
    this->_taxaComissao = taxaComissao;
}

double Imovel::getTaxaComissao(){
    return this->_taxaComissao;
}

void Imovel::print(){
    std::cout << "[Vendedor]" << std::endl;
    _vendedor.print();
    std::cout << "[Corretor]" << std::endl;
    std::cout << "  " + _corretor << std::endl;
    std::cout << "Area: " << _area << std::endl
        << "  Quartos: " << _quartos << std::endl
        << "  Banheiros: " << _banheiros << std::endl
        << "  Vagas: " << _vagas << std::endl
        << "Taxa de Comissão: " << std::fixed << std::setprecision(0) << _taxaComissao*100 << "%" << std::endl
        << "Valor Comissão: R$ " << std::fixed << std::setprecision(2) << _valorComissao << std::endl
        << "Valor de Venda: R$ " << std::fixed << std::setprecision(2) << _valorVenda << std::endl;
}