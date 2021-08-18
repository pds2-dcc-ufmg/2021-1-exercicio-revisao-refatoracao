#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <vector>
#include "ImovelProps.hpp"
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    
    protected:
    ImovelProps _props;
    void printTituloImovel ();
    void printImovel ();

     public:
    Imovel(ImovelProps props) : _props(props) {};

    virtual void print () {};

    ImovelProps getProps () const { return _props; }

    double getValor () const { return _props.area * _props.valorM2; }
    virtual double getTaxaComissao () const { return 0.0; };
    double getComissao () const { return getTaxaComissao() * getValor(); };
    double getValorTotal () const { return getValor() + getComissao(); };
};

#endif