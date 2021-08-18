#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Cobertura.hpp"

using namespace std;
    
    Cobertura :: Cobertura () {};
    
    Cobertura :: Cobertura (string corretor_, double area_, int quartos_, int banheiros_, int vagas_, double valor_por_m2_, Cliente cl){
        construtora (corretor_, area_, quartos_, banheiros_, vagas_, valor_por_m2_, cl);
        this->valor_da_comissao = this->comissao ();
        this->valor_de_venda = valor() + this->comissao();
    }
    
    double Cobertura:: comissao() {

        return (Imovel:: comissao (taxa_de_comissao)); 
    }

    void Cobertura:: print() {

         Imovel::print("[Cobertura]",taxa_de_comissao);
    }
