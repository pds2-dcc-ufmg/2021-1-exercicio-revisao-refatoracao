#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public: 
     
    Casa ();

    double comissao();

    void print();

    private:

    double taxa_de_comissao = 0.06;

};

#endif