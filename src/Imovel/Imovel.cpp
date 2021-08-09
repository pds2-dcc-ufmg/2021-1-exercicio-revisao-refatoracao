#include <iostream>
#include <string>
#include "Imovel.hpp"

using namespace std;

Imovel::Imovel()
{
}

void Imovel::setArea(double area)
{
    this->_area = area;
}

void Imovel::setQuartos(int quartos)
{
    this->_quartos = quartos;
}

void Imovel::setBanheiros(int banheiros)
{
    this->_banheiros = banheiros;
}

void Imovel::setVagas(int vagas)
{
    this->_vagas = vagas;
}

void Imovel::setValor_M2(double valor_m2)
{
    this->_valor_m2 = valor_m2;
}

void Imovel::setVendedor(Cliente vendedor)
{
    this->_vendedor = vendedor;
}

void Imovel::setCorretor(string corretor)
{
    this->_corretor = corretor;
}

double Imovel::getArea()
{
    return _area;
}

int Imovel::getQuartos()
{
    return _quartos;
}

int Imovel::getBanheiros()
{
    return _banheiros;
}

int Imovel::getVagas()
{
    return _vagas;
}

double Imovel::getValor_M2()
{
    return _valor_m2;
}

Cliente Imovel::getVendedor()
{
    return _vendedor;
}

string Imovel::getCorretor()
{
    return _corretor;
}

double Imovel::valor()
{
    return _area * _valor_m2 + comissao();
}