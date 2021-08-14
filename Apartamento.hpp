#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using std::string;
using std::cout;
using std::endl;

class Apartamento : public Imovel {

    public: 
        void print();
    
        Apartamento(string, double, int, int, int, double, Cliente);
};

#endif
