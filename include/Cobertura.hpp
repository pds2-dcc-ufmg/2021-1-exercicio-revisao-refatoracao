#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
    public:
        Cobertura(double _area,
                  int _numQuartos,
                  int _numBanheiros,
                  int _numVagas,
                  double _valorMetroQuadrado,
                  Cliente _vendedor,
                  string _corretor);
        void imprimeInformacoes();
};

#endif