#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
#define PORCENTAGEM_COMISSAO 0.04

using namespace std;

class Apartamento : public Imovel {
    public: 
        double valor();
        double comissao();
        void print();
};

#endif