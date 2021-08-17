#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:
    //Valor da comissão para Cobertura
    double getComissao() ;

    void print();
};

#endif