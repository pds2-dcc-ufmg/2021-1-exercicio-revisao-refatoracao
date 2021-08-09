#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"

using namespace std;

class Casa : public Imovel {

    public:
        Casa(double area,
            int numeroQuartos,
            int numeroBanheiros,
            int numeroVagas,
                double valorMetroQuadrado,
                Cliente vendedor,
                string corretor);    
};

#endif