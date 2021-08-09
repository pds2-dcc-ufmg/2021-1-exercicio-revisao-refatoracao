#include "Imovel.hpp"

    double Imovel::calcularValorTotal() {
        return this->_area * this->_valorMetroQuadrado;
    }

    double Imovel::calcularComissao() {
        return this->_area * this->_valorMetroQuadrado * this->_percentualComissao;
    }

    double Imovel::calcularValorVenda() {
        return this->calcularValorTotal()+this->calcularComissao();
    }