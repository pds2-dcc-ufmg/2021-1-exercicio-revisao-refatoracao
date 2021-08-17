#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
   Apartamento() {
       taxa_comissao = 0.04;
   }
    
    double valor() {
        return AREA * VALORm2;
    }
    
    double comissao() {
        return valor() * taxa_comissao;
    }
    
    void print() {
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
    }
};

#endif
