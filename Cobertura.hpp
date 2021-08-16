#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    public:
    
    Cobertura() {this->setComissao(0.10);}

    void print() {
        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        
    }
};

#endif