#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    public:
        Casa(double _area,
             int _numQuartos,
             int _numBanheiros,
             int _numVagas,
             double _valorMetroQuadrado,
             Cliente _vendedor,
             string _corretor);
        void imprimeInformacoes();
};

#endif