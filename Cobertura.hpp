#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:

    double valor() {
        
        return (Imovel::valor());
    }

    double comissao() {

        return (Imovel:: comissao (taxa_de_comissao)); 
    }

    void print() {

        Imovel::print("[Cobertura]", taxa_de_comissao);
       
    }

    private:

    double taxa_de_comissao = 0.10;
    
};

#endif