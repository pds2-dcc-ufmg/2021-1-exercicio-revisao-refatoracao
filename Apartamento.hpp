#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
     
    Apartamento ();

    double comissao();

    void print();

    private:

    double taxa_de_comissao = 0.04;

};

#endif