#include "Imovel.hpp"
#include "Cliente.hpp"
#include "Cobertura.hpp"

using namespace std;
    
    Cobertura :: Cobertura () {};

    double Cobertura:: comissao() {

        return (Imovel:: comissao (taxa_de_comissao)); 
    }

    void Cobertura:: print() {

         Imovel::print("[Cobertura]",taxa_de_comissao);
    }
