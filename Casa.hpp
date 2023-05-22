#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
    
    Casa(){
        taxa_comisao = 6;
        IMOVEL= "[Casa]";
    };

};

#endif