#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
     //Calcula a comissão do imóvel 
    double comissao () {
      setComissao(0.04);
      return this->valor() * this->getComissao();
  }

    void print() {
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
    }
};

#endif
