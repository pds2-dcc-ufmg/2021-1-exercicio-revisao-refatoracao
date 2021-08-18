#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    private:

    const int PCT = 6;

    public:

    //CONSTRUTORES
    Casa(){};

    Casa(string _corretor, double _area, int _quarto, int _banheiro, int _vaga, double _VALORm2, Cliente _vendedor);

    double comissao();

    void print();
    
};

#endif