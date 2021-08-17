#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public:
      Apartamento(){
        TAXAcomissao = 0.04; 
      }
      
      double valor() {return AREA * VALORm2;}
      double comissao() {return valor() * TAXAcomissao;}

      void print() {
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
      }
};

#endif