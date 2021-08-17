#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"

using namespace std;

class Casa : public Imovel {

    public:
    //Valor da comissão para casa
    double getComissao();

    void print();

};

#endif