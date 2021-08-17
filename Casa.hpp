#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double valor() {

        return (Imovel::valor());
    }

    double comissao() {
        
        return (Imovel:: comissao (taxa_de_comissao)); 

    }

    void print() {

        Imovel::print("[Casa]", taxa_de_comissao);    
    }

    private:

    double taxa_de_comissao = 0.06;

};

#endif