#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
    //comissao da casa 6%
    double comissao() override{

        double _Comissao = this->get_Area() * this->get_Valor_m2();
        this->set_Taxa_de_Comissao(6);
        return _Comissao * (this->get_Taxa_de_Comissao()/100);

    }

    void print() override{
      this->set_Taxa_de_Comissao(6);
        std::cout << "[Casa]" << endl;
    }

};

#endif
