#ifndef IMOVEL_PROPS_HPP
#define IMOVEL_PROPS_HPP

#include <string>
#include "Cliente.hpp"

typedef struct ImovelProps {
    string corretor;
    double area;
    int numQuartos;
    int numBanheiros;
    int numVagas;
    double valorM2;
    Cliente vendedor;
} ImovelProps;

#endif 