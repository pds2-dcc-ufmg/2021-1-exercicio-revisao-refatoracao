#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {

    public:
   //comissao da Cobertura 10%
    double comissao() override{

        double _Comissao = this->get_Area() * this->get_Valor_m2();
        this->set_Taxa_de_Comissao(10);
        return _Comissao * (this->get_Taxa_de_Comissao()/100);

    }

    void print() override{
      this->set_Taxa_de_Comissao(10);
        std::cout << "[Cobertura]" << endl;
    }
};

#endif
