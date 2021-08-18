#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    

        protected:
    static int _somaQte;
    static double _somaValor;
    static double _somaComissao;


     public:
    static int getSomaQte () { return _somaQte; }
    static double getSomaValor () { return _somaValor; }
    static double getSomaComissao () { return _somaComissao; }

        double getTaxaComissao () const { return 0.1; }

     void print();

    Cobertura (ImovelProps props);
};

#endif