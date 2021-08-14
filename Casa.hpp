#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using std::string;
using std::cout;
using std::endl;

class Casa : public Imovel {
    public:
        Casa(string, double, int, int, int, double, Cliente);
    
        void print();
};

#endif
