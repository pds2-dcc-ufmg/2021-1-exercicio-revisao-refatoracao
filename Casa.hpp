#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
      Casa(){
        TAXAcomissao = 0.06; 
      }
      
      double valor() {return AREA * VALORm2;}
      double comissao() {return valor() * TAXAcomissao;}

      void print() {
        std::cout << "[Casa]" << endl;
        Imovel::print();
      }
};

#endif