#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:
      Cobertura(){
        TAXAcomissao = 0.10; 
      }
      
      double valor() {return AREA * VALORm2;}
      double comissao() {return valor() * TAXAcomissao;}

      void print() {
        std::cout << "[Cobertura]" << endl;
        Imovel::print();
      }
};

#endif