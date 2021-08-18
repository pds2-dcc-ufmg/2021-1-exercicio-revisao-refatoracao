#include <iostream>
#include <string>
#include "../headers/Imovel.hpp"

void Imovel::print()
{
    cout << "[" << getTipoImovel() << "]" << endl;
    cout << "[Vendedor]" << endl;
    getVendedor().print();
    cout << "[Corretor]" << endl;
    cout << "  " + getCorretor() << endl;
    std::cout << "Area: " << getArea() << endl
              << "  Quartos: " << getQuartos() << endl
              << "  Banheiros: " << getBanheiros() << endl
              << "  Vagas: " << getVagas() << endl
              << "Taxa de Comissão: " << 4 << "%" << endl
              << "Valor Comissão: R$ " << fixed << setprecision(2) << getValorComissao() << endl
              << "Valor de Venda: R$ " << fixed << setprecision(2) << getValorTotal() << endl;
}

double Imovel::getValorSemComissao()
{
    return getArea() * getValorM2();
}

double Imovel::getArea()
{
    return this->_area;
}

int Imovel::getQuartos()
{
    return this->_quartos;
}

int Imovel::getBanheiros()
{
    return this->_banheiros;
}

double Imovel::getVagas()
{
    return this->_vagas;
}

double Imovel::getValorM2()
{
    return this->_valorM2;
}

double Imovel::getValorTotal()
{
    return this->_valorTotal;
}

double Imovel::getValorComissao()
{
    return this->_valorComissao;
}

Cliente Imovel::getVendedor()
{
    return this->_vendedor;
}

string Imovel::getCorretor()
{
    return this->_corretor;
}

string Imovel::getTipoImovel()
{
    return this->_tipoImovel;
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

void Imovel::setValorM2(double valorM2)
{
    this->_valorM2 = valorM2;
}

void Imovel::setValorTotal(double valorTotal)
{
    this->_valorTotal = valorTotal;
}

void Imovel::setValorComissao(double valorComissao)
{
    this->_valorComissao = valorComissao;
}

void Imovel::setVendedor(Cliente vendedor)
{
    this->_vendedor = vendedor;
}

void Imovel::setCorretor(string corretor)
{
    this->_corretor = corretor;
}

void Imovel::setTipoImovel(string tipoImovel)
{
    this->_tipoImovel = tipoImovel;
}