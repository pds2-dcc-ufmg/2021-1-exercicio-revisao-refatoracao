#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
    //No construtor padrao...
    Casa(){
        //... definir a porcentagem correspondente a taxa de comissao de casas...
        TaxaComissao = 6;
        //... e o tipo de imovel.
        TipoImovel = "[Casa]";
    }
};

#endif