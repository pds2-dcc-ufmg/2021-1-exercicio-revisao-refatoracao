#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {

    public:
        Imovel(){}
        virtual ~Imovel(){}
        virtual void print() {}
        
};

#endif