#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using std::string;
using std::cout;
using std::endl;

class Cobertura : public Imovel {
    
    public:
        void print();
    
         Cobertura(string, double, int, int, int, double, Cliente);
};

#endif
