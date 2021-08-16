#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public: 
    
    Apartamento() {this->setComissao(0.04);}

    void print() {
        std::cout << "[Apartamento]" << endl;
        Imovel::print();
    }
};

#endif