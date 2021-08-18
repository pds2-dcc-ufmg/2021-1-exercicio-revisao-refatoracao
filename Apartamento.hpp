#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP
#define taxaApt 0.04
#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public: 
    double valor();
    double ValorApt;

    double comissao();  
    void print();
};

#endif
