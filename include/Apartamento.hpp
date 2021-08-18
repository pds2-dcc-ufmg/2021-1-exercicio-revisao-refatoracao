#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

private:
    
    const int PCT = 4;

public:

    //CONSTRUTORES
    Apartamento(){};
    Apartamento(string _corretor, double _area, int _quarto, int _banheiro, int _vaga, double _VALORm2, Cliente _vendedor);

    double comissao();
    void print();
};

#endif