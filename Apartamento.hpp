#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 

    Apartamento(){
        taxa_comisao = 4;
        IMOVEL= "[Apartamento]";
    };

};
#endif