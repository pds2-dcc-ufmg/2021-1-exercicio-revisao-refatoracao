#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:
        Apartamento( double area,
            int numeroQuartos,
            int numeroBanheiros,
            int numeroVagas,
            double valorMetroQuadrado,
            Cliente vendedor,
            string corretor);
};

#endif