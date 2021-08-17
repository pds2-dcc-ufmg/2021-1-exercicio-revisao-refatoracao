#include "DadosValorArea.hpp"

DadosValorArea::DadosValorArea(double area , double valor_por_m2 , double percentageComissao)
:_area(area) , _valor_por_m2(valor_por_m2) , _percentageComissao(percentageComissao){
    this->_valorTotal = (area * valor_por_m2);
    this->_comissao = (this->_valorTotal * percentageComissao);
}

double DadosValorArea::getArea(){return _area;}

double DadosValorArea::getValorPorM2(){return _valor_por_m2;}

double DadosValorArea::getValorTotal(){return _valorTotal;}

double DadosValorArea::getPercentageComissao(){return (_percentageComissao * 100);}

double DadosValorArea::getComissao(){return _comissao;}