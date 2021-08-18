#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {
    private:
    Imovel* casa;
    public:
        Casa();
        virtual void print();
};

#endif