#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Casa : public Imovel {

    public:
    
    double comissao() {
        setComissao(0.06);
        return this->valor() * this->getComissao();
        
    }

    void print() {
        std::cout << "[Casa]" << endl;
        Imovel::print();
    }

};

#endif