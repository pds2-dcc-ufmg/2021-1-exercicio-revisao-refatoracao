#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {

    public: 
    double get_comissao() override{
        taxa_comissao = 4;
        double comissao = area * valor_m2;
        return comissao * taxa_comissao/100;   
    }
    
    void print() {
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
    } 
};

#endif