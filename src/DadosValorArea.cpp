#include "DadosValorArea.hpp"
#include <iostream>

DadosValorArea::DadosValorArea(double area , double valor_por_m2 , double percentageComissao)
:_area(area) , _valor_por_m2(valor_por_m2) , _percentageComissao(percentageComissao){
    this->_valorArea = (area * valor_por_m2);
    this->_comissao = (this->_valorArea * percentageComissao);
    this->_valorVenda = (this->_valorArea + this->_comissao);
}

double DadosValorArea::getArea(){return _area;}

double DadosValorArea::getValorPorM2(){return _valor_por_m2;}

double DadosValorArea::getValorVenda(){return _valorVenda;}

double DadosValorArea::getValorArea(){return _valorArea;}

double DadosValorArea::getPercentageComissao(){return (_percentageComissao * 100);}

double DadosValorArea::getComissao(){return _comissao;}