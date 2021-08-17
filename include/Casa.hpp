#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double getComissaoCasa();

    void print();
};

#endif