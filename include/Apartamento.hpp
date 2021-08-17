#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public:
        Apartamento(double _area,
                    int _numQuartos,
                    int _numBanheiros,
                    int _numVagas,
                    double _valorMetroQuadrado,
                    Cliente _vendedor,
                    string _corretor);
        void imprimeInformacoes();
};

#endif