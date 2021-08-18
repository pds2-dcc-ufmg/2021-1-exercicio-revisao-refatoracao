#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Apartamento.hpp"

using namespace std;
    
    Apartamento :: Apartamento () {};

    double Apartamento:: valor() {

        return (Imovel::valor());
    }

    double Apartamento:: comissao() {

        return (Imovel:: comissao (taxa_de_comissao)); 
    }

    void Apartamento:: print() {

         Imovel::print("[Apartamento]",taxa_de_comissao);
    }


   


