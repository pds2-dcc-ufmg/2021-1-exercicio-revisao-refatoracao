#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Cobertura : public Imovel {
    
    public:

    double get_comissao() override{
        taxa_comissao = 10;
        double comissao = area * valor_m2;
        return comissao * taxa_comissao/100;   
    }

    void print() {
        std::cout << "[Cobertura]" << endl;
        Imovel::print();
    }
};

#endif