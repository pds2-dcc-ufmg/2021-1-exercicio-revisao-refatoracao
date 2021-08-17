#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    //Valor da comissão para apartamento
    double getComissao();

    void print();
};

#endif