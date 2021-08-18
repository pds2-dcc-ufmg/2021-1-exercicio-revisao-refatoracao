#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

      protected:
    static int _somaQte;
    static double _somaValor;
    static double _somaComissao;

    public:

    static int getSomaQte () { return _somaQte; }
    static double getSomaValor () { return _somaValor; }
    static double getSomaComissao () { return _somaComissao; }

   
    double getTaxaComissao () const { return 0.06; }
    void print ();

    Casa (ImovelProps props);

};

#endif