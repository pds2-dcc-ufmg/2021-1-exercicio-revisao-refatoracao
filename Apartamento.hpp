#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public:
    //comissao da Apartamento 4%
    double comissao() override{

        double _Comissao = this->get_Area() * this->get_Valor_m2();
        this->set_Taxa_de_Comissao(4);
        return _Comissao * (this->get_Taxa_de_Comissao()/100);

    }

    void print() override{
        this->set_Taxa_de_Comissao(4);
        std::cout << "[Apartamento]" << endl;
    }
};

#endif
