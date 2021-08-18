#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {

    public: 
     
    Cobertura ();

    double valor();

    double comissao();

    void print();

    private:

    double taxa_de_comissao = 0.10;

};

#endif