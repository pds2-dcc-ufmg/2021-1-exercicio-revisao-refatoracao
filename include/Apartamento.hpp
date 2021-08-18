#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:
    //No construtor padrao...
    Apartamento(){
        //... definir a porcentagem correspondente a taxa de comissao de apartamentos...
        TaxaComissao = 4;
        //... e o tipo de imovel.
        TipoImovel = "[Apartamento]";
    }
};

#endif