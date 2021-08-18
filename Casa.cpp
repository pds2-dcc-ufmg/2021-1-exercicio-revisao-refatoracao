#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Casa.hpp"

using namespace std;
    
    Casa :: Casa () {};

    Casa:: Casa (string corretor_, double area_, int quartos_, int banheiros_, int vagas_, double valor_por_m2_, Cliente cl){
        construtora (corretor_, area_, quartos_, banheiros_, vagas_, valor_por_m2_, cl);
        this->valor_da_comissao = this->comissao ();
        this->valor_de_venda = valor() + this->comissao();
    }

    double Casa:: comissao() {

        return (Imovel:: comissao (taxa_de_comissao)); 
    }

    void Casa:: print() {

         Imovel::print("[Casa]",taxa_de_comissao);
    }
