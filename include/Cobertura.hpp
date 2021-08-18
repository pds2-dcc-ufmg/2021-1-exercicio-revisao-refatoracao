#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:
    //No construtor padrao...
    Cobertura(){
        //... definir a porcentagem correspondente a taxa de comissao de coberturas...
        TaxaComissao = 10;
        //... e o tipo de imovel.
        TipoImovel = "[Cobertura]";
    }
};

#endif