#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:
  
    Cobertura() {
       taxa_comissao = 0.06;
   }
    
    double valor() {
        return AREA * VALORm2;
    }
    
    double comissao() {
        return valor() * taxa_comissao;
    }
    
  
    void print() {
        std::cout << "[Cobertura]" << endl;
        Imovel::print();
    }

};

#endif
