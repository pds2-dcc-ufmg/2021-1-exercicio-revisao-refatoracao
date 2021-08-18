#ifndef CASA_HPP
#define CASA_HPP
#define taxaCom 0.06

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor();
    double ValorCasa;
    
    double comissao();
    
    void print();
};

#endif
