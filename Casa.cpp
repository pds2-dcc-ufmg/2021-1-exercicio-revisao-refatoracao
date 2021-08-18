#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Casa.hpp"

using namespace std;
    
    Casa :: Casa () {};

    double Casa:: valor() {

        return (Imovel::valor());
    }

    double Casa:: comissao() {

        return (Imovel:: comissao (taxa_de_comissao)); 
    }

    void Casa:: print() {

         Imovel::print("[Casa]",taxa_de_comissao);
    }
