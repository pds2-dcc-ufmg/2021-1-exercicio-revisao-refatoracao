#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    private:
        Imovel* cobertura;
    public: 
        Cobertura();
        virtual void print();
};

#endif