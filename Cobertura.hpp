#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double comissao() {
        setComissao(0.10);
        return this->valor() * this->getComissao();
    }

        
    void print() {
        std::cout << "[Cobertura]" << endl;
        Imovel::print();
    }
};

#endif
