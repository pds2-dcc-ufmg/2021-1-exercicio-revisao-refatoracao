#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:
        Cobertura(
            double area,
            int numeroQuartos,
            int numeroBanheiros,
            int numeroVagas,
            double valorMetroQuadrado,
            Cliente vendedor,
            string corretor);
};

#endif