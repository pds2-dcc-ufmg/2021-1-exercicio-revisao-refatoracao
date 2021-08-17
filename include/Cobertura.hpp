#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:
        //Retorna valor da comissao da cobertura
        double getComissaoCobertura();
        //Informações da cobertura
        void print();
};

#endif