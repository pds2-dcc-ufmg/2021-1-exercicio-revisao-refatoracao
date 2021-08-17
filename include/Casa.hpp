#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"

using namespace std;

class Casa : public Imovel {

    public:
        //Retorna valor da comissao da casa
        double getComissaoCasa();
        //Informações da cobertura
        void print();
};

#endif