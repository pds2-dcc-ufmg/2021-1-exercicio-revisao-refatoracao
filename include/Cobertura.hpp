#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:
        Cobertura();
        void print();

    private:
        const double kTaxaComissao = 0.10;
};

#endif