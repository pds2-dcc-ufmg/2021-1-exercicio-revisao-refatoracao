#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:

        double getComissaoCobertura();

        void print();
};

#endif