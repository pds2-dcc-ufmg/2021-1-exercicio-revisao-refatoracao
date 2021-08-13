#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
#include "ImovelProps.hpp"

using namespace std;

class Apartamento : public Imovel {
  protected:
    static int _somaQte;
    static double _somaValor;
    static double _somaComissao;

  public:
    Apartamento (ImovelProps props);

    void print ();

    static int getSomaQte () { return _somaQte; }
    static double getSomaValor () { return _somaValor; }
    static double getSomaComissao () { return _somaComissao; }

    double getTaxaComissao () const { return 0.04; }

};
#endif