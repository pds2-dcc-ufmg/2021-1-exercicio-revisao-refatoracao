#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
     double taxaComissao = 0.04;
     double CalcularComissao();

     void Print();
};

#endif