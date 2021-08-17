#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:

    double get_comissao() override{
        taxa_comissao = 6;
        double comissao = area * valor_m2;
        return comissao * taxa_comissao/100;   
    }

    void print() {
        std::cout << "[Casa]" << endl;
        Imovel::print();
    }
};

#endif